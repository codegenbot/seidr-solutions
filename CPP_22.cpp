```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integer(std::vector<int> values) {
    std::vector<int> result; 
    bool isFirst = true;
    int count = 0; // Count non-zero elements
    for (int value : values) {
        if(value != 0) {
            if (!isFirst) {
                result.push_back(value);
            } else {
                result.push_back(value);
                isFirst = false;
            }
            count++; // Increment count for each non-zero element
            if(count > 10) { // Limit to a maximum of 10 non-zero elements
                break;
            }
        } else {
            isFirst = true;
            count = 0; // Reset count when encountering zero
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

    assert(std::vector<int>({1}) == std::vector<int>({1}));
    return 0;
}