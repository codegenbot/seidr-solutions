#include <vector>

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        if (i % 3 == 0) {
            sum += i / 3 - 2;
        } else {
            sum += (i - 1) / 3 - 2 + 1;
        }
    }
    return sum;