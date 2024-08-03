#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones(n);
    for (int i = 0; i < n; ++i) {
        stones[i] = (i + 1) * 2;
    }
    return stones;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> stones = make_a_pile(n);
    std::vector<int> expected = {4, 6, 8, 10, 12, 14};
    bool result = issame(stones, expected);
    std::cout << (result ? "Success" : "Failure");

    return 0;
}