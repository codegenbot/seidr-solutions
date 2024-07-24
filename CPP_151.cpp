#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(int(num) > 0 && int(num) == (int)num){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1, 2.5, 3};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 14); // insert your expected result here
    return 0;
}