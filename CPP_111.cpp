bool issame(map<char, int> m1, map<char, int> m2);

map<char, int> histogram(string test);

bool issame(map<char, int> m1, map<char, int> m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    for (const auto& pair : m1) {
        if (m2.find(pair.first) == m2.end() || m2[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

map<char,int> histogram(string test){
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
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