#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

std::vector<float> lst = {1.0, 3.0, 5.0, 7.0, 9.0};
long long odd_sum = 165;

int main() {
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}