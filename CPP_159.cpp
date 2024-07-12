#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int number = a[0];
    int need = a[1];
    int remaining = a[2];

    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}