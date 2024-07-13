int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        if (freq.find(i) == freq.end()) {
            freq[i] = 1;
        } else {
            freq[i]++;
        }
    }
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}