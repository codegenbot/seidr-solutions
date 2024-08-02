```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    int odd_sum = 0; 
    float input;
    while(std::cin >> input) {
        if(input > 0 && floor(input) == input) {
            odd_sum += pow(input, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum); 
}