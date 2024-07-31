#include <algorithm>
#include <cassert>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, -23, 243, -400, 0};
    assert(issame(*std::max_element(numbers.begin(), numbers.end()), 0));
    return 0;
}