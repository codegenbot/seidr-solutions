#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    
    // Get the input vector
    std::cout << "Enter numbers (enter -1 to stop):" << std::endl;
    while ((std::cin >> input) && input != -1) {
        lst.push_back(input);
    }
    
    long long odd_sum = double_the_difference(lst);
    std::cout << "The sum of the squares of the positive integers in the list is: " << odd_sum << std::endl;
    
    return 0;
}