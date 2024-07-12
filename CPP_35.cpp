```cpp
#include <cassert>
#include <algorithm>
#include <cmath>

int main() {
    int arr[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return std::abs(std::max_element(arr)) - 12 < 1e-4;
}