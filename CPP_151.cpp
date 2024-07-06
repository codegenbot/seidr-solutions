#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1,3,5,7};
    long long odd_sum = 0;
    
    // Initialize sum
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += int(x);
    }
    
    assert(double_the_difference(lst) == odd_sum * odd_sum);
    return 0;
}