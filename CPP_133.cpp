#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(const vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded_num = std::ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1.0f, 1.0f, 0.0f}) == 2);
    return 0;
}