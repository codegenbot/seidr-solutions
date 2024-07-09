unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int res = -1;
    for (auto& pair : freq) {
        if (pair.first > pair.second && pair.second >= pair.first) {
            res = max(res, pair.first);
        }
    }
    
    return res;
}