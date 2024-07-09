#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(const std::vector<int>& l) {
    float max_val = static_cast<float>(l[0]);
    for (size_t i = 1; i < l.size(); i++) {
        if (static_cast<float>(l[i]) > max_val) {
            max_val = static_cast<float>(l[i]);
        }
    }
    return max_val;
}

```