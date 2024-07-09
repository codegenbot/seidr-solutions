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
    long long odd_sum;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst); 

    // Print the result
    if (odd_sum == 0) {
        std::cout << "The sum of squares of odd numbers is 0." << std::endl;
    } else {
        std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    }

    return 0;
}