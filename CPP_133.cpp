```
#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += std::pow(x,2);
    }
    return total;
}

int main() {
    std::vector<float> inputVector;
    
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    for(int i = 0; i < size; ++i) {
        float val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        inputVector.push_back(val);
    }
    
    int result = sum_squares(inputVector);

    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}