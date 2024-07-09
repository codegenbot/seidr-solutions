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
    for(std::vector<float>::iterator it = inputVector.begin(); it != inputVector.begin()+size; ++it) { 
        float val;
        std::cout << "Enter element " << (it-inputVector.begin()+1) << ": ";
        std::cin >> *it;
    }

    int result = sum_squares(inputVector);

    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}