unordered_map<int, int> freq_map;
    for (int num : lst) {
        freq_map[num]++;
    }
    
    int result = -1;
    for (auto pair : freq_map) {
        if (pair.first > pair.second && pair.second >= result) {
            result = pair.second;
        }
    }
    
    return result > 0 ? result : -1;
}