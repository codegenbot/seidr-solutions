#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst;
    int n;

    // Read input from user
    while (std::cin >> n) {
        lst.push_back(n);
    }

    if (lst.empty()) {
        return 0; // No elements in the list
    }

    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());

    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            std::cout << "The next smallest number is: " << sorted_lst[i + 1] << std::endl;
            return 0;
        }
    }

    // If no smaller element found
    std::cout << "No smaller element found." << std::endl;

    return 0;
}