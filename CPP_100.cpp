```
#include <initializer_list>

#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) continue;
        pile.push_back(i);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}