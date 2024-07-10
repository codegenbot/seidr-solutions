bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(result.begin() + i, result.begin() + i + 3);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}