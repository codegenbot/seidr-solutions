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
    
    std::cout << "Enter numbers (enter -1 to stop):" << std::endl;
    
    while ((std::cin >> num) && (num != -1)) {
        inputVector.push_back(num);
    }
    
    long long result = double_the_difference(inputVector);
    std::cout << "The sum of the squares is: " << result << std::endl;
    
    return 0;
}