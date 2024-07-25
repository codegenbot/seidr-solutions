#include <vector>
#include <cmath>
#include <cassert>

long double double_the_difference(std::vector<float> lst){
    long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.0, 3.0, 4.0};
    long odd_sum = 20;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}