```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> numbers) {
    long long sum = 0;
    for (float x : numbers) {
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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<float> numbers(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> numbers[i];
    }
    
    long long result = double_the_difference(numbers);
    std::cout << "The sum of the squares of all odd integers in the list is: " << result << std::endl;
    
    return 0;
}