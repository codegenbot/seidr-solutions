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
    // Example usage
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int threshold = 6;
    
    bool is_below_threshold = below_threshold(numbers, threshold);
    
    std::cout << "Is below threshold? " << (is_below_threshold ? "Yes" : "No") << std::endl;
    
    return 0;
}