```cpp
#include <iostream>
#include <vector>

long long double_the_difference(std::vector<long double> lst){
    long long sum = 0;
    for (long double num : lst) {
        if (num > 0 && modf((double)num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<long double> myVector = {1.5, 2.7, 3.8}; 
    long long odd_sum = double_the_difference(myVector); 
    return 0;
}