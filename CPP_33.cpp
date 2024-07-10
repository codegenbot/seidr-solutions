void sort_third(vector<int>& l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + i + 3);
    }
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}