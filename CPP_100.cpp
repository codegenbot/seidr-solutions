#include <iostream>
#include <vector>

namespace std {

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

} // namespace std

std::vector<int> make_a_pile(int n) {
    std::vector<int> levels;
    int stones = n;
    for (int i = 0; i < n; i++) {
        levels.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return levels;
}