bool issame(const map<char, int>& m1, const map<char, int>& m2) {
    return m1.size() == m2.size() && equal(m1.begin(), m1.end(), m2.begin());
}

map<char, int> histogram(string test);

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