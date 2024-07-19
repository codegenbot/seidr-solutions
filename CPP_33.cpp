bool operator==(const vector<int>& lhs, const vector<int>& rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    }
    for (size_t i = 0; i < lhs.size(); ++i) {
        if (lhs[i] != rhs[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
    });
    return l;
}