vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? b % 3 == 0 ? a < b : true : b % 3 == 0 ? false : a < b;
    });
    return l;
}

bool operator==(const vector<int>& l1, const vector<int>& l2) {
    if (l1.size() != l2.size()) {
        return false;
    }
    for (size_t i = 0; i < l1.size(); ++i) {
        if (l1[i] != l2[i]) {
            return false;
        }
    }
    return true;
}