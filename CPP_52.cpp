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
    if (!below_threshold({1, 8, 4, 10}, 10)) {
        std::cout << "The vector is not below the threshold.\n";
    } else {
        std::cout << "The vector is below the threshold.\n";
    }
    return 0;
}