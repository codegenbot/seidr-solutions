#include <vector>

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size(), 0);

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result[i] = 1;
        }
    }

    return result;
}