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
    float num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while (std::cin >> num && num != -1) {
        lst.push_back(num);
    }
    long long odd_sum = double_the_difference(lst); 
    std::cout << "The sum of squares is: " << odd_sum;
    return 0;
}