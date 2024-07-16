bool monotonic(const vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}