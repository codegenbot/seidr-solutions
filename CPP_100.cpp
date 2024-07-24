#include <iostream>
#include <vector>

std::vector<std::pair<int, int>> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({i * 2 - 1, i * 2});
    }
    return pile;
}

bool issame(const std::vector<std::pair<int, int>>& a, const std::vector<std::pair<int, int>>& b) {
    return (a == b);
}

int main() {
    assert(isSame(make_a_pile(8), {{1, 2}, {4, 5}, {8, 10}, {12, 14}, {16, 18}, {20, 22}}));
    return 0;
}