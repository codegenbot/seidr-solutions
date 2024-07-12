#include <vector>
bool issame(vector<int> a, vector<int> b) {
    int number = a[0], need = a[1], remaining = a[2];
    int total = number + min(need, remaining);
    int left = max(0, remaining - need);
    return {total, left};
}