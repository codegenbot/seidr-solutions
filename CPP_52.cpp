#include <iostream>
#include <vector>
#include <initializer_list>
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
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    std::cout << "Error: All numbers in the list are below or equal to the threshold.\n";
    return 0;
}