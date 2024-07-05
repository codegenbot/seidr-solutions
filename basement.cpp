#include <iostream>
#include <vector>

int basement(std::vector<int>& v) {
    if (!hasNegativeNumbers(v)) {
        return -1;
    }
    
    int i = 0;
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return i + 1;
}

bool hasNegativeNumbers(std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int index = basement(vec);
    if (index != -1) {
        std::cout << "First negative sum index: " << index << std::endl;
    } else {
        std::cout << "No negative sum found." << std::endl;
    }
    return 0;
}