map<char,int> result;
    map<char,int> count;
    int maxCount = 0;
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            maxCount = max(maxCount, count[c]);
        }
    }
    for (auto& p : count) {
        if (p.second == maxCount) {
            result[p.first] = p.second;
        }
    }
    return result;
}