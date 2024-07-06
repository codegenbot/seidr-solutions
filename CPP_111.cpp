```cpp
map<char, int> histogram(string test) {
    map<char, int> result;
    string temp = "";
    for (char c : test) {
        if (c == ' ') {
            int count = 0;
            for (int i = 0; i < temp.size(); i++) {
                char ch = temp[i];
                if (result.find(ch) != result.end()) {
                    result[ch]++;
                } else {
                    result[ch] = 1;
                }
            }
            temp = "";
        } else {
            temp += c;
        }
    }
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
        }
    }
    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }
    return finalResult;
}