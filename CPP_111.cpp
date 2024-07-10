map<char,int> histogram(string test){
    map<char,int> result;
    int max_count = 0;

    for (string word : split(test, ' ')) {
        for (char c : word) {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            max_count = max(max_count, result[c]);
        }
    }

    map<char,int> max_result;

    for (auto& pair : result) {
        if (pair.second == max_count) {
            max_result[pair.first] = pair.second;
        }
    }

    return max_result;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}