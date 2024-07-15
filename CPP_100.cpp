#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(2*i + 6);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}