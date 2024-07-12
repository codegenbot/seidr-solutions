#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int total = a[0] + min(a[1], b[0]);
    int left = max(0, b[0] - a[1]);
    return {total, left};
}