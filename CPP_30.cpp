```
#include <vector>
#include <algorithm>

std::vector<std::float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<std::float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}