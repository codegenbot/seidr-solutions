auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int> result(std::unique_copy(first, last));
    return result;
}

bool isSame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}