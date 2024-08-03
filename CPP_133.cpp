#include <cmath>
#include <vector>
#include <cassert>

int sum_squares(std::vector<float> lst);

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
}

int sum_squares(vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        int ceil_num = ceil(num);
        total += pow(ceil_num, 2);
    }
    return total;
}