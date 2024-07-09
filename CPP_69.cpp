int search(vector<int> lst) {
    map<int, int> freq;
    for (int x : lst) {
        if (freq.find(x) == freq.end()) {
            freq[x] = 1;
        } else {
            freq[x]++;
        }
    }
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first && p->first > 0) {
            return p->first;
        }
    }
    return -1;
}