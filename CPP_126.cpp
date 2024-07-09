```
#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int num;
    
    // Input
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    
    // Check for sorted list
    if (is_sorted(lst)) {
        std::cout << "The list is sorted.\n";
    } else {
        std::cout << "The list is not sorted.\n";
    }
    
    return 0;
}