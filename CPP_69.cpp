int search(vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        if (num > result && count(lst.begin(), lst.end(), num) >= num) {
            result = num;
        }
    }
    return result;
}