int search(vector<int> lst) {
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            return num;
        }
    }
    return -1;
}