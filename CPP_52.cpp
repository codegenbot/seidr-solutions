#include <iostream>
#include <vector>
#include <cassert>

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
    if(not(below_threshold(numbers, threshold))) {
        std::cout << "The numbers are not below the threshold.\n";
    } else {
        std::cout << "The numbers are below the threshold.\n";
    }
    return 0;
}