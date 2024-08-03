#include <iostream>
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    for (int i = 0; i < n; ++i) {
        stones.push_back(i + 4);
    }
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> stones = make_a_pile(n);
    std::vector<int> expected = {4, 5, 6, 7, 8, 9};
    bool result = issame(stones, expected);
    std::cout << (result ? "Success" : "Failure");

    return 0;
}