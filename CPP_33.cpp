bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sort(result.begin() + i, result.begin() + i + 3);
        }
    }
    return result;
}