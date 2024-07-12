#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
}