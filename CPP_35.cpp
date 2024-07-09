```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
int maxNum = *std::max_element(numbers.begin(), numbers.end());
assert(abs(maxNum - 124) < 1e-4);
std::cout << maxNum << std::endl;