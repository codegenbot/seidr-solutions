bool issame(const map<char, int> &m1, const map<char, int> &m2);
map<char, int> histogram(string test);

bool issame(const map<char, int> &m1, const map<char, int> &m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    for (const auto &p : m1) {
        if (m2.find(p.first) == m2.end() || m2.at(p.first) != p.second) {
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