vector<int> largest_smallest_integers(vector<int> lst) {
    int a = 0, b = INT_MAX;
    for (int i : lst) {
        if (i < 0 && i > a) {
            a = i;
        }
        else if (i > 0 && i < b) {
            b = i;
        }
    }
    return {(a >= 0) ? 0 : a, (b <= 0) ? 0 : b};
}