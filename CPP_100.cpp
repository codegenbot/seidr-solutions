#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() {
    assert (issame(make_a_pile(8), make_a_pile(8)));
    return 0;
}