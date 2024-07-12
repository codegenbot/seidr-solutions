#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    int number = a[0];
    int remaining = a[1];
    int need = b[0];

    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}