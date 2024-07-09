#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum; 

    // fill your code here to calculate and store values in 'lst' and 'odd_sum'

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}