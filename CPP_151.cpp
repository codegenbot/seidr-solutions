#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == int(num) && int(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0}; // example list of floats
    long long odd_sum = 42; // example odd_sum value
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}