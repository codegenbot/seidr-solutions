map<char,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    for (string word : split(test, ' ')) {
        if (result.find(word[0]) == result.end()) {
            result[word[0]] = 1;
        } else {
            result[word[0]]++;
        }
        maxCount = max(maxCount, result[word[0]]);
    }
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            cout << "{" << it->first << ", " << it->second << "}";
            if (next(it) != result.end()) {
                cout << ", ";
            }
        }
    }
    return result;
}

string split(string str, char delimiter) {
    string token;
    vector<string> result;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == delimiter) {
            result.push_back(token);
            token = "";
        } else {
            token += str[i];
        }
    }

    if (!token.empty()) {
        result.push_back(token);
    }

    return join(result, ' ');
}

string join(vector<string> str, char delimiter) {
    string result;
    for (int i = 0; i < str.size(); i++) {
        result += str[i];
        if (i < str.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}