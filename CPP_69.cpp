int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first) {
            return it->first;
        }
    }
    return -1;
}