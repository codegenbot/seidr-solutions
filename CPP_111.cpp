map<char, int> histogram(string test) {
    map<char, int> freq;
    for (char& c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    return result;
}