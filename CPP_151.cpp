#include <vector>
#include <iostream>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}

int main(){
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(double_the_difference(lst) == 35);
    
    return 0;
}