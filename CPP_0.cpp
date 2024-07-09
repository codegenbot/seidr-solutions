#include <vector>

bool checkCloseElements(std::vector<float> a) {
    for (int i = 0; i < a.size() - 1; ++i) {
        if (std::abs(a[i] - a[i + 1]) < 0.01f) {
            return true;
        }
    }
    return false;
}