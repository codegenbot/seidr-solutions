#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int mainTest() {
    std::vector<float> lst = {1.0f, 3.0f, 5.0f, 7.0f}; 
    long long odd_sum = double_the_difference(lst); 

    assert(odd_sum == odd_sum * odd_sum);
    return 0;
}