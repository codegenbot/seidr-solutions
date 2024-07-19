```cpp
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    auto maxVal = *std::max_element(v.begin(), v.end());
    std::cout << "Maximum value is: " << maxVal << std::endl;
}