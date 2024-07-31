#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
T maximum(const std::vector<T>& numbers, const T& value) {
    return *std::max_element(numbers.begin(), numbers.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{}));
    return 0;
}
