#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1, 2, 3, 4, 5};
    long long odd_sum = 1 * 1 + 3 * 3 + 5 * 5;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}