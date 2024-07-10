#include <iostream>
#include <vector>
#include <cmath>

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
    int odd_sum = 0; 
    while(std::cin >> num) {
        lst.push_back(num);
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2); 
            }
        }
    }
    std::cout << "The sum of the squares of the odd numbers is: " << odd_sum << std::endl;
    return 0;
}