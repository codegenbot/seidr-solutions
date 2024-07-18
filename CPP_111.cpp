map<char,int> histogram(string test){
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    int max_count = 0;
    for (const auto &pair : counts) {
        max_count = max(max_count, pair.second);
    }
    
    map<char, int> result;
    for (const auto &pair : counts) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}