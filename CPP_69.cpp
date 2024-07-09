#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    assert(search(input) == -1);

    return 0;
}