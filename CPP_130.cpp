#include <vector>
#include <cassert>

vector<int> tri(int n);

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

vector<int> tri(int n){
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    result.push_back(1 + i / 2);
                } else {
                    result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
                }
            }
        }
    }
    return result;
}

int main() {
    // Test issame function
    assert(issame({1, 2, 3}, {1, 2, 3}));
    assert(!issame({1, 2, 3}, {1, 2, 4}));

    // Test tri function
    assert(issame(tri(0), {3}));
    assert(issame(tri(1), {3, 1}));
    assert(issame(tri(2), {3, 1, 2}));
    assert(issame(tri(3), {3, 1, 2, 4}));

    return 0;
}