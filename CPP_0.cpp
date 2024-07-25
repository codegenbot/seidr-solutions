#include <vector>
#include <algorithm>

bool hasCloseElements(const std::vector<float>& vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) < 0.01f)
            return true;
    }
    return false;
}