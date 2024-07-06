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
    float val;
    
    // Get the input vector
    while (true) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> val;
        if (val < 0)
            break;
        lst.push_back(val);
    }
    
    long long odd_sum = double_the_difference(lst);
    std::cout << "The sum of the squares is: " << odd_sum << std::endl;

    return 0;
}