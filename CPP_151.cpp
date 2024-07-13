#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> inputVector;
    float num;
    
    // Read input from user and store it in the vector...
    std::cout << "Enter numbers (enter -1 to stop): ";
    while ((std::cin >> num) && (num != -1)) {
        inputVector.push_back(num);
    }
    
    // Call the function with the input
    long long result = double_the_difference(inputVector);
    std::cout << "The sum of squares is: " << result << std::endl;
    return 0;
}