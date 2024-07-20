#include <iostream>
#include <vector>
#include <algorithm>

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
    std::cout << "\n";

    return 0;
}