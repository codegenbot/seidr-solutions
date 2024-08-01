int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && count(lst.begin(), lst.end(), i) >= i) {
            max = i;
            break;
        }
    }
    return max == 0 ? -1 : max;
}