```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> input) {
    long long sum = 0;
    for (float num : input) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> input;
    float num;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        input.push_back(std::stof(std::to_string(num)));
    }
    long long result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << result << std::endl;
    
}