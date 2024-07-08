#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            std::cout << "Error: The vector contains numbers not below the threshold." << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 8, 4, 10};
}