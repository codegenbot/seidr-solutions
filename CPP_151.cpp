#include <iostream>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<long double> myVector){
    long long sum = 0;
    for (long double num : myVector) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<long double> myVector = {1.5, 2.7, 3.8}; 
    long long odd_sum = double_the_difference(myVector); 
    assert(odd_sum == double_the_difference(myVector));
    return 0;
}