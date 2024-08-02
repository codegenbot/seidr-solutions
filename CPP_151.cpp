#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 4.8};
    long long odd_sum = double_the_difference(lst);
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            std::cout << "The difference of the square root of the number is: " << num - sqrt(num) << std::endl;
        }
    }
    return 0;
}