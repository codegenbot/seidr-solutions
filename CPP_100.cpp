```c++
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i >= 0; i -= 1)
        pile.push_back(i);
    return pile;
}