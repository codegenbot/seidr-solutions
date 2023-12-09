#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    auto max_it = std::max_element(v.begin(), v.end());
    if (abs(*max_it - 124) < 1e-4) {
        std::cout << "The result is within the tolerance." << std::endl;
    } else {
        std::cout << "The result is not within the tolerance." << std::endl;
    }
    return 0;
}