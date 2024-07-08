```cpp
#include <vector>
#include <algorithm>

std::vector<std::float> get_positive(std::vector<std::float> l) {
    std::vector<std::float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<std::float> a, std::vector<std::float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}