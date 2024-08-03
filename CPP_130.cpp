#include <vector>

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

vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) {
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    result.push_back(2);
    int tri_n_minus_2 = 1;
    int tri_n_minus_1 = 3;
    int tri_n = 2;
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            tri_n = 1 + i / 2;
        } else {
            tri_n = tri_n_minus_1 + tri_n_minus_2 + tri_n + 1;
        }
        result.push_back(tri_n);
        tri_n_minus_2 = tri_n_minus_1;
        tri_n_minus_1 = tri_n;
    }
    return result;
}

assert(issame(tri(0), {}));
assert(issame(tri(1), {3}));
assert(issame(tri(2), {3, 1}));
assert(issame(tri(4), {3, 1, 2, 4, 7}));