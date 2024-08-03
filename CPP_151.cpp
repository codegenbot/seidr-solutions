```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                odd_sum += pow(x, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;
    // Input your code here
    for(int i=0; i<5; i++) {
        float x;
        std::cin >> x;
        lst.push_back(x);
    }
    
    long long result = double_the_difference(lst);
    std::cout << "The sum of the squares of odd numbers is: " << result << std::endl;

    return 0;
}