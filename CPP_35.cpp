```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> l;
    int maxVal = *std::max_element(l.begin(), l.end());
    std::cout << "Maximum value is: " << abs(maxVal) << std::endl;
    return 0;
}