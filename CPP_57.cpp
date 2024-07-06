bool monotonic(vector<float> l) {
    bool increasing = true;
    for (int i = 1; i < l.size(); i++) {
        if ((l[i] >= l[i-1]) && increasing)
            continue;
        else if (l[i] < l[i-1])
            increasing = false;
        else
            return false;
    }
    return increasing;
}