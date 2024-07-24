#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}

const std::vector<std::pair<int, int>>& make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2*i - 1, 2*i});
    }
    return pile;
}

int main() {
    assert(std::make_pair(8, 10) == make_a_pile(4));
    return 0;
}