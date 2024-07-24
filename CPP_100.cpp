#include <vector>
#include <iostream>
#include <assert.h>

std::vector<int> make_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(make_pile(8) == std::vector<int>({2, 4, 6, 8, 10, 12, 14, 16}));
    return 0;
}