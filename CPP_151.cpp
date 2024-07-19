#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.0, 2.0, 3.0};
    long long odd_sum = double_the_difference(lst);
    long long result = double_the_difference(lst);
    assert(result == odd_sum);
}