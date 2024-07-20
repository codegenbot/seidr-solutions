int result = -1;
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
        if (it->first > 0 && it->first <= it->second) {
            result = it->first;
            break;
        }
    }
    return result;
}