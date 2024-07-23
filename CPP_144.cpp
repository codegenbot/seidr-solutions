#include <iostream>
#include <string>

bool simplify(std::string numerator1, std::string denominator1, 
              std::string numerator2, std::string denominator2) {
    int productNumerator = std::stoi(numerator1.substr(0, numerator1.find('/'))) * 
                            std::stoi(numerator2.substr(0, numerator2.find('/')));
    if (std::stoi(denominator2.substr(0, denominator2.find('/'))) != 0) {
        int productDenominator = std::stoi(denominator1.substr(0, denominator1.find('/'))) * 
                                 std::stoi(denominator2.substr(0, denominator2.find('/')));
        if (productDenominator == 0)
            return false; // Check for zero denominators
        return productNumerator % productDenominator == 0;
    }
    return false;
}

int main() {
    std::cout << simplify("1", "5", "1", "5") << std::endl;
    return 0;
}