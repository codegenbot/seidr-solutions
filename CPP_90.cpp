```cpp
#include <vector>
#include <algorithm>
#include <iostream>

int findNextSmallest(std::vector<int> lst) {
    if (lst.empty()) return -1; 
    std::vector<int> sorted(lst);
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int driver() { 
    std::vector<int> lst;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    if (lst.empty()) {
        std::cout << "Error: The input list is not valid. Please enter a non-empty list." << std::endl;
    } else {
        int result = findNextSmallest(lst);
        if (result == -1) {
            std::cout << "The input list does not contain any distinct elements." << std::endl;
        } else {
            std::cout << "The next smallest number in the given list is " << result << std::endl;
        }
    }
    return 0; 
}

int main() { 
    driver(); 
}