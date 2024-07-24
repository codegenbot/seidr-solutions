int search(vector<int> lst) {
    int max = 0;
    for (auto x : lst) {
        if (x > 0 && x >= count(x, lst)) {
            max = x;
        }
    }
    return max == 0 ? -1 : max;
}