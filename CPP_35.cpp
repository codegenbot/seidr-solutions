#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    auto max_val = *std::max_element(l.begin(), l.end());
    std::cout << "The maximum value in the vector is: " << max_val << std::endl;
    return 0;
}