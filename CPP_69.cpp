int search(const vector<int> &lst) {
    int result = -1;
    unordered_set<int> unique_nums(lst.begin(), lst.end());
    
    for (int num : unique_nums) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= num) {
            result = max(result, num);
        }
    }
    return result;
}