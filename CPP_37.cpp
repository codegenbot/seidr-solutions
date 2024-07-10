
bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

void sort_even(vector<float>& l) {
    vector<float> tmp;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            tmp.push_back(l[i]);
        }
    }
    sort(tmp.begin(), tmp.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = tmp[j];
            ++j;
        }
    }
}