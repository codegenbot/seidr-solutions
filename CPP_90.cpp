#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; // Assuming -1 represents None
    std::sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != smallest) return lst[i];
    }
    return -1; // If no second smallest element is found
}

int main() {
    std::cout << next_smallest({-35, 34, 12, -45}) << std::endl; // Example usage
    return 0;
}