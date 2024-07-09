map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters)) {
        int count = 0;
        for (char letter : letters) {
            if (letter == c) count++;
        }
        result[c] = count;
    }

    map<char, int> maxCountResult;
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxCountResult.clear();
            maxCountResult[it->first] = it->second;
        } else if (it->second == maxCount) {
            maxCountResult[it->first] = it->second;
        }
    }

    return maxCountResult;
}