bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> l_even, l_odd;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());

    for (int i = 0, j = 0, k = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = l_even[j];
            ++j;
        }
    }
}