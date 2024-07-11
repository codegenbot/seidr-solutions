bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> result;
for (int i = 2; i < n; ++i) {
    bool is_prime = true;
    for (int j = 2; j * j <= i; ++j) {
        if (i % j == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime) {
        result.push_back(i);
    }
}
return result;