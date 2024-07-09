#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> &lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)(num * num);
        }
    }
    return 2 * odd_sum;
}

int main() {
    std::vector<float> lst = {2.0, 3.0, 4.0, 5.0};
    long long odd_sum = 54;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}