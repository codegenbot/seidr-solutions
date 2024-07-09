bool below_threshold(vector<int> l, int t) {
    for (int n : l) {
        if (n >= t) {
            return false;
        }
    }
    return true;
}