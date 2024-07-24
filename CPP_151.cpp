#include <iostream>
#include <vector>
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

std::vector<float> myVector = {1.5f, 2.7f, 3.8f}; 
std::vector<float> lst = myVector; 
long long odd_sum = double_the_difference(lst); 
assert(double_the_difference(myVector) == odd_sum);
return 0;