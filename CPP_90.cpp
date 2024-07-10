Find the smallest number in a sequence of numbers that is greater than all previous numbers.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return {};

    int next_smallest = -1;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] <= lst[i + 1]) {
            next_smallest = lst[i + 1];
            break;
        }
    }

    return {next_smallest};
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> lst[i];
    }

    std::vector<int> result = next_smallest(lst);

    if (!result.empty()) {
        std::cout << "The smallest number greater than all previous numbers is: " << *result.begin() << std::endl;
    } else {
        std::cout << "No such number exists." << std::endl;
    }

    return 0;
}