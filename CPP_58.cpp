#include <vector>
#include <cassert>

using namespace std;

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

vector<int> common(vector<int> v1, vector<int> v2) {
    vector<int> result;
    for (int i : v1) {
        for (int j : v2) {
            if (i == j) {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}

assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));