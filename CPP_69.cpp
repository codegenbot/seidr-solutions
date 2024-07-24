int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    int max_val = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            max_val = p.first;
            break;
        }
    }
    return max_val;
}