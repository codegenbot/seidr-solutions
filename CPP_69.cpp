int result = -1;
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto& it : freq) {
        if (it.first > it.second && it.first > 0) {
            result = max(result, it.first);
        }
    }
    return result;
}