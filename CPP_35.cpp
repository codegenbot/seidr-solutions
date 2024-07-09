```
#include <vector>
#include <algorithm>

float find_max_element(std::vector<float> l) {
    return *std::max_element(l.begin(), l.end());
}