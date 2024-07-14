Here is the solution:

string camelCase(string s) {
    vector<string> words = split(s, ' ');
    string result;
    
    for (const auto& word : words) {
        if (!result.empty()) {
            result += toupper(word[0]);
            for (int i = 1; i < word.size(); i++) {
                result += tolower(word[i]);
            }
        } else {
            result = word;
        }
    }
    
    return result;
}

string split(string s, char c) {
    vector<string> result;
    string temp;
    
    for (const auto& ch : s) {
        if (ch == c) {
            result.push_back(temp);
            temp.clear();
        } else {
            temp += ch;
        }
    }
    
    result.push_back(temp);
    
    return join(result, ' ');
}

string join(vector<string> words, char c) {
    string result;
    
    for (const auto& word : words) {
        if (!result.empty()) {
            result += c;
        }
        result += word;
    }
    
    return result;
}