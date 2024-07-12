#include <vector>

bool issame(vector<int> a, vector<int> b) {
    vector<int> eat(int number, int need, int remaining) {
        int total = number + min(need, remaining);
        int left = max(0, remaining - need);
        return {total, left};
    }
}