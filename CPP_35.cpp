#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> numbers = {};
int maxNum = *std::max_element(numbers.begin(), numbers.end());
assert(abs(maxNum) < 1e-4);
std::cout << maxNum << std::endl;