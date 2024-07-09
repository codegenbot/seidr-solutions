#include <iostream>
#include <vector>
#include <algorithm>

int max_val = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});

int main() {
    std::cout << max_val << std::endl;
    return 0;
}