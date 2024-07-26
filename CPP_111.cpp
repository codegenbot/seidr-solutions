map<char, int> result;
    map<char, int> count;
    int max_count = 0;
    
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            max_count = max(max_count, count[c]);
        }
    }
    
    for (auto it : count) {
        if (it.second == max_count) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}