#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterIntegers(std::vector<int> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (static_cast<int>(value) != 0) {
            result.push_back(static_cast<int>(value));
        }
    }
    return result;
}

int main() {
    int num1, num2; 
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    std::vector<int> vector1 = {num1};
    std::vector<int> vector2 = {num2};

    if(isSame(vector1, vector2)) {
        std::cout << "Vectors are same." << std::endl; 
    }
    else {
        std::cout << "Vectors are not same." << std::endl;
    }

    std::vector<int> values = {1, 2, 3, 4};
    std::vector<int> filtered = filterIntegers(values);
    for (const auto& value : filtered) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    return 0;
}