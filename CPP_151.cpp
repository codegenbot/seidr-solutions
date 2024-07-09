#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.5f, -4.5f, 6.7f};
    long long result = double_the_difference(lst);
    std::cout << "The sum of squares of positive even numbers is: " << result << std::endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0f) {
            sum += pow(num, 2);
        }
    }
    return sum;
}