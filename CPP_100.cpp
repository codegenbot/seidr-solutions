#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::pair<int, int> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2*i - 1, 2*i});
    }
    return *std::max_element(pile.begin(), pile.end());
}

int main() {
    assert(std::make_pair(8, 10) == make_a_pile(4));
    // You can add more test cases as needed
    return 0;
}