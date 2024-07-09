```c++
#include <iostream>
#include <vector>

int sum_squares(const std::vector<float>& inputVector) {
    int result = 0;
    for (const auto& val : inputVector) {
        result += val * val;
    }
    return result;
}

int main() {
    std::vector<float> inputVector;

    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    inputVector.reserve(size);
    for(int i = 0; i < size; ++i) { 
        float val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> inputVector[i];
    }

    int result = sum_squares(inputVector);

    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}