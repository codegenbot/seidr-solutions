Here is the solution:

string camelCase(string s) {
    vector<string> words = split(s, " ");
    string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result += toupper(words[i][0]);
            for (int j = 1; j < words[i].size(); j++) {
                result += tolower(words[i][j]);
            }
        } else {
            result = words[i];
        }
        
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

vector<string> split(string s, string delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != stdstring::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);
    return tokens;
}