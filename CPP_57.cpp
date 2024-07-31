#include <iostream>
#include <vector>
#include <cassert>

bool isMonotonic(std::vector<int> l) {
    if (l.empty()) {
        return true;
    }
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    int n;
    std::vector<int> input;
    
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    std::cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        input.push_back(element);
    }
    
    if (isMonotonic(input)) {
        std::cout << "The list is monotonic." << std::endl;
    } else {
        std::cout << "The list is not monotonic." << std::endl;
    }
    
    return 0;
}