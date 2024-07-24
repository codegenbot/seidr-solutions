#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if number is positive and integer
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.0f, 3.5f};
    float odd_sum = double_the_difference(lst);
    // Rest of your code
}