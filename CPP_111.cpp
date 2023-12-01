map<char,int> histogram(string test){
    map<char, int> countMap;
    string word;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else {
            if (countMap.find(word[0]) == countMap.end()) {
                countMap[word[0]] = 1;
            } else {
                countMap[word[0]]++;
            }
            word = "";
        }
    }
    if (word != "") {
        if (countMap.find(word[0]) == countMap.end()) {
            countMap[word[0]] = 1;
        } else {
            countMap[word[0]]++;
        }
    }
    int maxCount = 0;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    map<char, int> result;
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}