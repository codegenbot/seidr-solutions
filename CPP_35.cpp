```cpp
#include <vector>
#include <algorithm>

float findMax(float l) {
    std::vector<float> v = {l};
    return *std::max_element(v.begin(), v.end());
}