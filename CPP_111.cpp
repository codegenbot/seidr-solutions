map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test + " ";
    int maxCount = 0;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c != ' ') {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            maxCount = max(maxCount, result[c]);
        }
    }

    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); it++) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}