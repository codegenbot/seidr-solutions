```cpp
#include <algorithm>
#include <vector>

int maxVal = *std::max_element({-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
int main() {
    return std::abs(maxVal);
}