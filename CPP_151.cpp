#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.8f, 4.9f, -5.6f};
    long long result = double_the_difference(lst);
    std::cout << "The sum of the squares of positive integers is: " << result << std::endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}