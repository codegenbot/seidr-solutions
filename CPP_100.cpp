```cpp
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

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main_test() {
    assert(same(make_a_pile(15), {1, 3, 5, 7, 9, 11, 13, 15}));
    return 0;
}