#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1; // Assuming -1 represents None
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    int smallest = sorted_lst[0];
    for (int i = 1; i < sorted_lst.size(); ++i) {
        if (sorted_lst[i] != smallest) return sorted_lst[i];
    }
    return -1; // If no second smallest element is found
}

int main() {
    std::cout << next_smallest({-35, 34, 12, -45}) << std::endl; // Should print -35
    return 0;
}