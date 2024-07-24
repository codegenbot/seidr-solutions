#include <vector>

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        sum += floor((double)i / 3) - 2;
    }
    return sum;