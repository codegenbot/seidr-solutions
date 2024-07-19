#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (std::fmod(num, 2.0) != 0.0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    
    std::cout << "Enter numbers (enter 'stop' to finish): ";
    
    while(std::cin >> num) {
        if(num == 'stop') break;
        lst.push_back(num);
    }
    
    int odd_sum = 0;
    for (float n : lst) {
        if (std::fmod(n, 2.0) != 0.0) {
            odd_sum += n;
        }
    }
    std::cout << "The sum of squares is: " << double_the_difference(lst) << std::endl;
    
    return 0;
}