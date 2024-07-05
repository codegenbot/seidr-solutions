#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1; // Using -1 to represent None
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    int smallest = sorted_lst[0];
    for (int i = 1; i < sorted_lst.size(); ++i) {
        if (sorted_lst[i] > smallest) return sorted_lst[i];
    }
    return -1; // If no second smallest element found
}

int main() {
    std::vector<int> values = {-35, 34, 12, -45};
    std::cout << next_smallest(values) << std::endl; // Should return the second smallest
    return 0;
}