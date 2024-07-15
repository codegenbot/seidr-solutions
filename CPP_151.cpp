#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5, -3.0, 2.0, 8.0, 4.5, 5.0, -1.0};
    long long result = double_the_difference(numbers);
    std::cout << "Result: " << result << std::endl;
    return 0;
}