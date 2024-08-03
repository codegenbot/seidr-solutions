#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for (float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}

int main() {
    assert(sum_squares({-1.0f, 1.0f, 0.0f}) == 2); 
    return 0;
}