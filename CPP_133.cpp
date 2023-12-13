#include <vector>
#include <cassert>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    // Add more test cases here
    return 0;
}