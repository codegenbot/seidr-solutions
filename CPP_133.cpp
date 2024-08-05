#include <cmath>
#include <vector>
#include <cassert>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded = ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    return 0;
}