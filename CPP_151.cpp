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
    std::vector<double> lst = {1.5, 3.0, 4.25, 6.75};
    double odd_sum = 0;
    for (double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += pow(num, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum );
    return 0;
}