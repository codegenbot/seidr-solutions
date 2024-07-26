bool monotonic(vector<float> l) {
    bool increasing = true, decreasing = true;
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}