int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    int max_freq = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->second > max_freq) {
            max_freq = it->second;
        }
    }
    return max_freq > 0 ? max_freq : -1;
}