#include <iostream>
#include <limits>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha;
    assert(!below_threshold({1, 8, 4, 10}, 10));
    std::cout << "All assertions passed." << std::endl;
    return 0;
}