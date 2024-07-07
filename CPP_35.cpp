```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxVal = *std::max_element(vec.begin(), vec.end());
    int minVal = *std::min_element(vec.begin(), vec.end());
    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;
}