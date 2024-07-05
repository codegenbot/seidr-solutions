#include <vector>
#include <iostream>

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l) {
        if(num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 8, 4, 10};
    int threshold = 10;
    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below threshold.\n";
    } else {
        std::cout << "Some numbers meet or exceed the threshold.\n";
    }
    return 0;
}