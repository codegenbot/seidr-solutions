Here is the solution:

string camelCase(string s) {
    vector<string> words = split(s, ' ');
    string result = "";
    
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result[0] = toupper(words[i][0]);
        } else {
            result += words[i];
        }
        
        for (int j = 1; j < words[i].size(); j++) {
            result += tolower(words[i][j]);
        }
        
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

vector<string> split(string s, char c) {
    vector<string> res;
    string temp = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            res.push_back(temp);
            temp = "";
        } else {
            temp += s[i];
        }
    }
    
    res.push_back(temp);
    
    return res;
}