```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<long long> input) {
    long long sum = 0;
    for (long long num : input) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<long long> input;
    long long n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (long long i = 0; i < n; i++) {
        long long num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    long long result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << result << std::endl;
}