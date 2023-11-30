#include <vector>

vector<int> tri(int n);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(tri(1) == vector<int>{1, 3});
    assert(tri(2) == vector<int>{1, 2, 3});
    assert(tri(3) == vector<int>{1, 2, 3, 8});
    assert(tri(4) == vector<int>{1, 2, 3, 8, 4});
    assert(tri(5) == vector<int>{1, 2, 3, 8, 4, 9});
    assert(tri(6) == vector<int>{1, 2, 3, 8, 4, 9, 5});
    assert(tri(7) == vector<int>{1, 2, 3, 8, 4, 9, 5, 12});
    assert(tri(8) == vector<int>{1, 2, 3, 8, 4, 9, 5, 12, 6});
    assert(tri(9) == vector<int>{1, 2, 3, 8, 4, 9, 5, 12, 6, 13});
    assert(tri(10) == vector<int>{1, 2, 3, 8, 4, 9, 5, 12, 6, 13, 7});
    return 0;
}

vector<int> tri(int n) {
    vector<int> result;
    result.push_back(3);

    if (n == 0) {
        return result;
    }

    result.push_back(1);

    if (n == 1) {
        return result;
    }

    result.push_back(2);

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }

    return result;
}