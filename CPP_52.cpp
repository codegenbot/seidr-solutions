#include <vector>
#include <iostream>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) return false;
    }
    return true;
}

int main() {
    std::vector<int> vec = {1, 8, 4, 10};
    int threshold = 10;
    
    if (!below_threshold(vec, threshold)) {
        std::cout << "There is at least one number greater than or equal to the threshold." << std::endl;
    } else {
        std::cout << "All numbers are below the threshold." << std::endl;
    }
    
    return 0;
}