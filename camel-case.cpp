string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) {
                int start = s.find(c);
                while (s[start] == '-') start++;
                result += toupper(s.substr(start, 1));
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    
    return result;
}