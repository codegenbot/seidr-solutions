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
    std::vector<int> lst;
    int n, element;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> element;
        lst.push_back(element);
    }
    std::cout << next_smallest(lst) << std::endl;
    return 0;
}