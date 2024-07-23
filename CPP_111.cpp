map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> counter;
    
    for (char& c : test) {
        if (c != ' ')
            counter[c]++;
    }
    
    int maxCount = 0;
    for (auto& p : counter) {
        maxCount = max(maxCount, p.second);
    }
    
    for (auto& p : counter) {
        if (p.second == maxCount) {
            result[p.first] = p.second;
        }
    }
    
    return result;
}