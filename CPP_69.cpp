int res = -1;
    unordered_map<int, int> freq;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > 0 && it->second >= it->first) {
            res = max(res, it->first);
        }
    }
    
    return res;
}