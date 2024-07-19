#include <initializer_list>

#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2 - 1);
    }
    return pile;
}

bool checkSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main_test() {
    assert(make_a_pile(8) == (std::vector<int>{1, 3, 5, 7, 9, 11, 13, 15}));
    return 0;
}