#include <vector>

vector<int> eat(vector<int> a, vector<int> b) {
    int number = a[0];
    int need = a[1];
    int remaining = b[0];

    int total = number + min(need, remaining);
    int left = max(0, remaining - need);
    return {total, left};
}