#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (fmod(num, 1.0) != 0.0) { // check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.0, 4.5};
    float odd_sum = 0.0;
    long long result = double_the_difference(lst);
    assert(result == 9.0); // use the declared variables
    return 0;
}