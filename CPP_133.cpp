#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<float> lst) {
    int total = 0;
    for(float x : lst) {
        int ceil_x = (int)std::ceil(x);
        total += std::pow(ceil_x,2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1.0f, 1.0f, 0.0f}) == 2);
    return 0;
}