Here is the completed code:

int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        if (!freq.count(i)) {
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