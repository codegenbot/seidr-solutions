#include <vector>
#include <iostream>
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
    if (below_threshold({1, 8, 4, 10}, 10)) {
        std::cout << "All elements are below the threshold\n";
    } else {
        std::cout << "There is at least one element equal to or above the threshold\n";
    }
    
    return 0;
}