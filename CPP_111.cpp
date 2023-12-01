map<char, int> histogram(string test) {
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second > maxCount) {
            result.clear();
            result[it->first] = it->second;
            maxCount = it->second;
        } else if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}