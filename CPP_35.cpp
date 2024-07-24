```c++
#include <algorithm>
#include <cmath>

double maximum_value(const vector<int>& numbers) {
    return *std::max_element(numbers.begin(), numbers.end());
}