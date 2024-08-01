int search(const vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > 0 && num <= freq) {
            result = max(result, num);
        }
    }
    return result;
}