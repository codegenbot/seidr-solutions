#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (fmod(x, 2.0) != 0.0) { 
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}

int main() {
    int n;
    std::vector<float> lst;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    long long result = double_the_difference(lst);
    std::cout << "The sum of the squares of odd positive integers is: " << result << std::endl;

    return 0;
}