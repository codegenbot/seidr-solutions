Here is the solution:

string camelCase(string s) {
    vector<string> tokens = split(s, '-');
    string result;
    for (int i = 0; i < tokens.size(); i++) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += tokens[i];
        if (i != tokens.size() - 1) {
            result += " ";
        }
    }
    return result;
}

vector<string> split(string s, char delimiter) {
    vector<string> tokens;
    string token;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == delimiter || i == s.length()) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            token += s[i];
        }
    }
    return tokens;
}