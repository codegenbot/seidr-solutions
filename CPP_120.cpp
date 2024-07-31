#include <algorithm>
#include <cassert>
#include <vector>

template <typename Container, typename T>
bool issame(const Container& a, const T& b) {
    return *std::max_element(a.begin(), a.end()) == b;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, -23, 243, -400, 0};
    assert(issame(numbers, 0));
    return 0;
}