vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + i + 3);
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}