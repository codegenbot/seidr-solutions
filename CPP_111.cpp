```
map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (const auto& str : split(test, ' ')) {
        if (!word.empty()) {
            ++result[word[0]];
            word.clear();
        }
        word += str;
    }
    if (!word.empty()) {
        ++result[word[0]];
    }

    map<char, int> maxCountMap;
    int maxCount = 0;

    for (const auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            maxCountMap[pair.first] = pair.second;
        }
    }

    return maxCountMap;
}

vector<string> split(const string& str, char delimiter) {
    vector<string> result;
    size_t pos = 0;
    size_t prevPos = 0;

    while ((pos = str.find(delimiter, prevPos)) != string::npos) {
        result.push_back(str.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
    if (prevPos < str.size()) {
        result.push_back(str.substr(prevPos));
    }

    return result;
}