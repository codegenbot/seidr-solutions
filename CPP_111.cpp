map<char, int> histogram(string test){
    map<char, int> result;
    map<char, int> counts;
    
    string word = "";
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                for (char letter : word) {
                    counts[letter]++;
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        for (char letter : word) {
            counts[letter]++;
        }
    }
    
    int maxCount = 0;
    for (const auto &entry : counts) {
        maxCount = max(maxCount, entry.second);
    }
    
    for (const auto &entry : counts) {
        if (entry.second == maxCount) {
            result[entry.first] = entry.second;
        }
    }
    
    return result;
}