```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numbers[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v(numbers, numbers + sizeof(numbers)/sizeof(numbers[0]));
    int maxNum = *std::max_element(v.begin(), v.end());
    assert(abs(maxNum - 124) < 1e-4);
    std::cout << maxNum << std::endl;
    return 0;
}