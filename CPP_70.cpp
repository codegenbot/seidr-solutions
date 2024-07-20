#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}

int main() {
    // Read input
    int n;
    std::cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    // Call function and output
    std::vector<int> output = strange_sort_list(input);
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Assert function call
    assert(issame(std::vector<int>{1, 2, 3}, std::vector<int>{1, 2, 3}));

    return 0;
}