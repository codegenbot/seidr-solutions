```cpp
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;

    while (std::cin >> num) {
        lst.push_back(num);
    }

    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}