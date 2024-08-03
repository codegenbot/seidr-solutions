#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;
    
    // Read input from user
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    odd_sum = double_the_difference(lst);
    
    // Print output
    std::cout << "Sum of squares of odd positive integers: " << odd_sum << std::endl;
    
    return 0;
}