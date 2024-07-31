#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
bool issame(const T& a, const T& b) {
    return a == b;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, -23, 243, -400, 0};
    assert(issame(*std::max_element(numbers.begin(), numbers.end()), 0));
    return 0;
}