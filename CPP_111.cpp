map<char, int> histogram(string test){
    map<char, int> result;
    istringstream iss(test);
    string word;

    while (iss >> word) {
        for (char ch : word) {
            result[ch]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    map<char, int> maxCountChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxCountChars[pair.first] = pair.second;
        }
    }

    return maxCountChars;
}