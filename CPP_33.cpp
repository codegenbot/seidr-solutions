#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    auto sort_third = [](std::vector<int>& vec) {
        std::sort(vec.begin(), vec.end());
    };

    sort_third(a);
    sort_third(b);

    return a == b;
}