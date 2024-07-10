bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float> &l) {
    vector<float> l_copy = l;
    vector<float> l_sorted;
    sort(l_copy.begin(), l_copy.end());
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_sorted.push_back(l_copy[i]);
        } else {
            l_sorted.push_back(l[i]);
        }
    }
    l = l_sorted;
}