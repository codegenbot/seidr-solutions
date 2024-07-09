#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}