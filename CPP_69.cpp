int search(const vector<int>& lst) {
    int result = -1;
    unordered_map<int, int> freq;
    for (int num : lst) {
        if (num > 0 && freq[num] >= num) {
            result = max(result, num);
        }
        freq[num]++;
    }
    return result;
}