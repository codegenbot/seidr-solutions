#include <vector>

bool hasCloseElements(std::vector<float> vec) {
    bool found = false;
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) <= 0.00001f) {
            found = true;
            break;
        }
    }
    return found;
}