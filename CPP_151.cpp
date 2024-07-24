#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if number is positive and integer
            sum += pow(num, 2);
            if (floor(num) % 2 != 0) {
                odd_sum += num;
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> input = {1.0f, 2.0f, 3.0f};
    long long result = double_the_difference(input);
    return 0;
}