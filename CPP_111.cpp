map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[256]; // assuming ASCII characters only
    int wordCount = 0;
    for (char c : test) {
        bool found = false;
        for (int i = 0; i < wordCount; i++) {
            if (words[i][0] == c) {
                words[i++] = "";
                found = true;
                break;
            }
        }
        if (!found) {
            words[wordCount++] = string(1, c);
        }
    }

    for (int i = 0; i < wordCount; i++) {
        if (!words[i].empty()) {
            char letter = words[i][0];
            result[letter]++;
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