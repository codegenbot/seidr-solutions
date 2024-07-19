bool monotonic(vector<float> l) {
    bool increasing = true, decreasing = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i - 1] > l[i]) {
            increasing = false;
        } else if (l[i - 1] < l[i]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}