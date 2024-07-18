#include <vector>

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

```