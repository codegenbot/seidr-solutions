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
    std::vector<int> numbers = {1, 8, 4, 10};
    int threshold = 10;
    
    bool result = below_threshold(numbers, threshold);
    
    if(result) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }
    
    return 0;
}