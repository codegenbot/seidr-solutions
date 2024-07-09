#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [y](float x) { return abs(x - y) < 0.0001; });
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0)
            result.push_back(num);
    }
    return result;
}