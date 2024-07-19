vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a > b : true : b % 3 == 0 ? false : a > b;
    });
    return l;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}