Here is the solution:

string camelCase(string s) {
    vector<string> parts;
    string part = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            parts.push_back(part);
            part = "";
        } else if (s[i] == ' ') {
            continue;
        } else {
            part += tolower(s[i]);
        }
    }
    
    if (!part.empty()) parts.push_back(part);
    
    string result = topperCase(parts[0]);
    
    for (int i = 1; i < parts.size(); i++) {
        result += firstUpper(parts[i]);
    }
    
    return result;
}

string topperCase(string s) {
    if (s.length() == 0)
        return s;
    string str = s.substr(0, 1);
    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            str += '-';
            str += toupper(s[i]);
        } else
            str += tolower(s[i]);
    }
    
    return str;
}

string firstUpper(string s) {
    if (s.length() == 0)
        return s;
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (i == 0)
            str += toupper(s[i]);
        else
            str += tolower(s[i]);
    }
    
    return str;
}