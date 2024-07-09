#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        return 0;
    }

    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst[i];
    }

    int result = next_smallest(lst);

    std::cout << "The next smallest number is: " << result << std::endl;

    return 0;
}

int next_smallest(std::vector<int> lst) {
    if (lst.empty()) return -1; // None in Python
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            return sorted_lst[i + 1];
        }
    }
    return -1; // None in Python
}