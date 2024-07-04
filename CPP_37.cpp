#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    size_t even_index = 0;
    for (size_t i = 0; i < l.size(); i += 2) {
        l[i] = even_indices[even_index++];
    }
    return l;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}