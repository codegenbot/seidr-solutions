int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int ans = -1;
    for (int num : lst) {
        freq[num]++;
    }
    for (auto& it : freq) {
        if (it.first > it.second && it.first > 0) {
            ans = max(ans, it.first);
        }
    }
    return ans;
}