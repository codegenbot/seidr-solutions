```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && int(num + 0.5) == num) { 
            sum += pow(int(num + 0.5), 2); 
        }
    }
    return sum;
}

int main_func() {
    std::vector<double> lst;
    double input;
    long long odd_sum = 0; 

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> input;

        if (input == -1.0) break; 

        lst.push_back(input);

        if (input > 0 && int(input + 0.5) == input) { 
            odd_sum += pow(int(input + 0.5), 2); 
        }
    }

    long long sum = double_the_difference(lst); 
    assert(sum == odd_sum);
    return 0;
}