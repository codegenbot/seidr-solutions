vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
    });
    return l;
}

bool operator==(const vector<int>& lhs, const vector<int>& rhs) {
    return lhs == rhs;
}