#include <initializer_list>
#include <vector>
#include <iostream>

int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    for (int x : arr) {
        if (x == 0) return 0; 
        product *= (x > 0 ? 1 : -1);
    }
    return product;
}

int main() {
    std::vector<int> arr;
    int result;

    while(true) {
        std::cout << "Enter numbers separated by spaces: ";
        for(std::string s; std::getline(std::cin, s); ) {
            if(s.empty()) break;
            arr.push_back(std::stoi(s));
        }
        if(arr.size() == 0) {
            std::cout << "Error: No input provided. Please try again." << std::endl;
        } else {
            result = prod_signs(arr);
            if(result == 0) {
                std::cout << "Product of signs: zero, Sum of absolute values: 0" << std::endl;
            } else if (result > 0) {
                std::cout << "Product of signs: positive, Sum of absolute values: " << result << std::endl;
            } else {
                std::cout << "Product of signs: negative, Sum of absolute values: " << -result << std::endl;
            }
            break;
        }
    }

    return 0;
}