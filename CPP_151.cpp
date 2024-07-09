#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> input;
    float temp;

    while(std::cin >> temp)
        input.push_back(temp);

    float odd_sum = 0.0; // Initialize or declare the variable
    for (float num : input) {
        if (num > 0 && modf(num, &num) == 0) 
            odd_sum += num;
    }
    
    assert(double_the_difference(input) == odd_sum);

    return 0;
}