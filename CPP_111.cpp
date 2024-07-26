bool issame(map<char, int> m1, map<char, int> m2);
map<char, int> histogram(string test);

bool issame(map<char, int> m1, map<char, int> m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    for (const auto &entry : m1) {
        if (m2.find(entry.first) == m2.end() || m2[entry.first] != entry.second) {
            return false;
        }
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    map<char, int> maxOccurrences;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    return maxOccurrences;
}