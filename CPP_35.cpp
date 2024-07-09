```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int maxFunc() {
    std::cout << *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) << std::endl;
    return 0;
}

int main() {
    maxFunc();
    return 0;
}