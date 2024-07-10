bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> l_copy = l;
    sort(l_copy.begin(), l_copy.end());
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = l_copy[i/2 * 2];
        }
    }
}