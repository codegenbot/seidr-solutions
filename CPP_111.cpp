map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = "";
    for (char c : test) {
        if (c != ' ') str += c;
        else {
            if (!str.empty()) {
                if (result.find(str[0]) == result.end() || result[str[0]] == 1)
                    result[str[0]] = 1;
                str.clear();
            }
        }
    }

    if (!str.empty()) {
        if (result.find(str[0]) == result.end() || result[str[0]] == 1)
            result[str[0]] = 1;
    }

    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) maxCount = it->second;
    }

    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount)
            finalResult[it->first] = it->second;
    }
    return finalResult;
}