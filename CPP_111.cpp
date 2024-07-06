map<char, int> histogram(string test) {
    map<char, int> result;
    string temp;
    int maxCount = 0;

    for (int i = 0; i < test.length(); i++) {
        if (test[i] == ' ') {
            if (!temp.empty()) {
                if (result.find(temp[0]) != result.end()) {
                    result[temp[0]]++;
                } else {
                    result[temp[0]] = 1;
                }
                temp.clear();
            }
        } else {
            temp += test[i];
        }
    }

    if (!temp.empty()) {
        if (result.find(temp[0]) != result.end()) {
            result[temp[0]]++;
        } else {
            result[temp[0]] = 1;
        }
    }

    for (auto it = result.begin(); it != result.end(); it++) {
        if (it->second > maxCount) {
            maxCount = it->second;
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