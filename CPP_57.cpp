bool monotonic(vector<float> l) {
    bool increasing = true, decreasing = true;
    for (int i = 1; i < l.size(); ++i) {
        increasing &= (l[i] >= l[i-1]);
        decreasing &= (l[i] <= l[i-1]);
    }
    return increasing || decreasing;
}