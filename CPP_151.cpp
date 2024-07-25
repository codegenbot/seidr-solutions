```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { // Check if number is positive and integer
            if (num % 2 != 0) { // Check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 3.0f, -2.25f};
    long long result = double_the_difference(numbers);
    return 0;
}