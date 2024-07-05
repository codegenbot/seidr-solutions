#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, -5};
    int index = basement(v);
    if (index >= 0) {
        std::cout << "First negative sum index: " << index << std::endl;
    } else {
        std::cout << "No negative sum found." << std::endl;
    }
}

int basement(std::vector<int>& v) {
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