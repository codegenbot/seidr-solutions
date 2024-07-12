#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return 0;
}