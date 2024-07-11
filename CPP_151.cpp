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
    std::vector<float> lst; // Input your numbers here
    std::cout << "Enter the numbers (space separated): ";
    for(float &num : lst) {
        std::cin >> num;
    }
    long long odd_sum = double_the_difference(lst); 
    return 0;
}