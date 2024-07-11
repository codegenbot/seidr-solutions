map<char, int> histogram(string test) {
    map<char, int> result;
    string word;
    int maxCount = 0;

    for (string s : split(test, ' ')) {
        for (char c : s) {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            maxCount = max(maxCount, result[c]);
        }
    }

    map<char, int> maxLetters;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            maxLetters[it->first] = it->second;
        }
    }

    return maxLetters;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    for (char c : str) {
        if (c != delimiter) {
            token += c;
        } else {
            tokens.push_back(token);
            token = "";
        }
    }
    tokens.push_back(token);
    return tokens;
}