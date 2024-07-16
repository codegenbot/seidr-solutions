bool monotonic(const vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    for (size_t i = 0; i < l.size() - 1; ++i) {
        if (l[i] > l[i + 1]) {
            increasing = false;
        }
        if (l[i] < l[i + 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}