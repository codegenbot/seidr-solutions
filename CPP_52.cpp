```c++
#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    int threshold = 2;
    
    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "Not all numbers are below the threshold." << std::endl;
    }
    
    return 0;
}