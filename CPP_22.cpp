```cpp
#include <vector>
#include <iostream>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integer(std::vector<int> values) {
    std::vector<int> result;
    for (int value : values) {
        if(value != 0) {
            result.push_back(value);
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

    if(issame(vector1, vector2)) {
        std::cout << "Vectors are same." << std::endl; 
    }
    else {
        std::cout << "Vectors are not same." << std::endl;
    }

    std::vector<int> values = {1, 0, 3, 4};
    std::vector<int> filtered = filter_integer(values);
    for (int value : filtered) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    assert(std::vector<int>({1, 1, 1}) == std::vector<int>({1, 1, 1}));
    return 0;
}