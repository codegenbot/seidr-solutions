#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.5, 3.0, 5.0, 7.2, 9.0};
    long long odd_sum = 1*1 + 3*3 + 9*9; // precalculated expected value for {1.0, 3.0, 9.0}
    assert(double_the_difference(lst) == odd_sum);
    std::cout << "Test Passed!" << std::endl;
    return 0;
}