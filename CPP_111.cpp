map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[256]; // assuming only lowercase letters and space as delimiter
    int wordCount = 0;
    for (char c : test) {
        if (c == ' ') {
            wordCount++;
        } else {
            words[wordCount].push_back(c);
        }
    }

    for (int i = 0; i <= wordCount; i++) {
        if (!words[i].empty()) {
            char ch = words[i][0];
            result[ch]++;
        }
    }

    map<char, int> maxMap;
    int maxCount = 0;
    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxMap.clear();
            maxMap[p.first] = p.second;
        } else if (p.second == maxCount) {
            maxMap[p.first] = p.second;
        }
    }

    return maxMap;
}

int main() {
    assert(histogram("a") == {{'a', 1}});
    return 0;
}