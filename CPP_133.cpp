#include <cassert>
#include <vector>
#include <cmath>

int sum_squares(const vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1,1,0}) == 2);
    return 0;
}