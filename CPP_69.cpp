int search(vector<int> lst) {
    int res = -1;
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto& [num, f] : freq) {
        if (num > f && f > res) {
            res = f;
        }
    }
    return res;
}