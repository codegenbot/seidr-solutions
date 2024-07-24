#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}

std::pair<int, int> make_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2 * i - 1, 2 * i});
    }
    return *std::max_element(pile.begin(), pile.end());
}

int main() {
    assert((issame(make_pile(4), {8, 10})) && std::make_pair(8, 10) == make_pile(4));
    // You can add more test cases as needed
    return 0;
}