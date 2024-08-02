Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst) {
    int a = 0, b = INT_MAX;
    for (int x : lst) {
        if (x < 0 && x > a) a = x;
        if (x > 0 && x < b) b = x;
    }
    return {(a >= 0) ? 0 : a, (b <= 0) ? 0 : b};
}