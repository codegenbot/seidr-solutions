unordered_map<int, int> freq;
    int res = -1;
    
    for (int num : lst) {
        freq[num]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->first > res) {
            res = it->first;
        }
    }
    
    return res;
}