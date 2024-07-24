#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int mainFunction() {
    std::vector<float> myVector; // your vector here
    float odd_sum = 0.0f; // declare and initialize before use
    myVector = {1.5f, 2.7f, 3.8f}; 
    odd_sum = double_the_difference(myVector); 
    assert(double_the_difference(myVector) == odd_sum);
    return 0;
}