#include <vector>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile = {i for int i = 2*n; i >= 0; i--};
    return pile;
}