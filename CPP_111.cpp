map<char,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    for (const string& word : split(test)) {
        char c = word[0];
        int count = 1;
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] == c) {
                ++count;
            } else {
                break;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
        result[c] = count;
    }
    map<char,int> maxResult;
    for (auto& pair : result) {
        if (pair.second == maxCount) {
            maxResult[pair.first] = pair.second;
        }
    }
    return maxResult;
}

vector<string> split(string test){
    vector<string> result;
    string temp;
    for (char c: test) {
        if (c != ' ') {
            temp += c;
        } else if (!temp.empty()) {
            result.push_back(temp);
            temp = "";
        }
    }
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}