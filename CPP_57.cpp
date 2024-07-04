#include <iostream>
#include <vector>
#include <cassert>

bool isMonotonic(const std::vector<int>& l) {
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(isMonotonic({1, 2, 2, 3}) == true);
    assert(isMonotonic({6, 5, 4, 4}) == true);
    assert(isMonotonic({1, 3, 2}) == false);
    assert(isMonotonic({9, 9, 9, 9}) == true);
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}