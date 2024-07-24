#include <vector>

int solve(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i - 2) / 3 + (i % 3 == 0);
        sum += temp;
    }
    return sum;