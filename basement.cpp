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