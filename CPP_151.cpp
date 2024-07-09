#include <iostream>
#include <vector>
#include <cmath>

int main() {
    vector<float> lst = {3.0f, 2.1f, 4.5f, -7.8f, 9.6f, 1.2f, 10.0f};
    float odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    std::cout << "Sum: " << double_the_difference(lst) << std::endl;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            sum += pow(int_part, 2);
        }
    }
    return sum;
}