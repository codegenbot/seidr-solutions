bool monotonic(vector<float> l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if ((l[i] > l[i-1]) && !increasing)
            return false;
        if ((l[i] < l[i-1]) && !decreasing)
            return false;
    }

    return increasing || decreasing;
}