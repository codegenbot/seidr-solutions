```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& input) {
    std::vector<int> output = input;
    std::sort(output.begin(), output.end());
    return output;
}