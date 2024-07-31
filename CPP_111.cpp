map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    int maxCount = 0;
    for (char c : test) {
        if (c != ' ') {
            if (result.find(c) == result.end())
                result[c] = 1;
            else
                result[c]++;
            maxCount = max(maxCount, result[c]);
        }
    }

    map<char, int> finalResult;
    for (auto& pair : result) {
        if (pair.second == maxCount)
            finalResult[pair.first] = pair.second;
    }

    return finalResult;
}