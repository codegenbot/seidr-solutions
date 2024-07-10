int search(vector<int> lst) {
    int ans = -1;
    for (int num : lst) {
        if (num > ans && count(lst.begin(), lst.end(), num) >= num) {
            ans = num;
        }
    }
    return ans;
}