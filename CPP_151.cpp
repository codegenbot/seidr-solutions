#include <vector>
#include <cmath>

double double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3, 4.0, 5};
    double odd_sum = double_the_difference(lst);
    return 0;
}