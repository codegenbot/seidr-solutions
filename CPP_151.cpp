#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    std::vector<float> lst = {1.0, 2, 3.0, 4, 5.0};
    long long odd_sum = double_the_difference(lst);
    return 0;
}