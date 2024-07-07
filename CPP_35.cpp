```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxVal = *std::max_element(vec.begin(), vec.end());
    return 0;
}