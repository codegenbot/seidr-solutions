#include <iostream>
#include <string>

bool simplify(std::string numerator1, std::string denominator1, 
              std::string numerator2, std::string denominator2) {
    int productNumerator = stoi(numerator1.substr(0, numerator1.find('/'))) * 
                            stoi(numerator2.substr(0, numerator2.find('/')));
    if (stoi(denominator2.substr(0, denominator2.find('/'))) != 0) {
        int productDenominator = stoi(denominator1.substr(0, denominator1.find('/'))) * 
                                 stoi(denominator2.substr(0, denominator2.find('/')));
        if (productDenominator == 0)
            return false; // Check for zero denominators
        return productNumerator % productDenominator == 0;
    }
    return false;

int main() {
    assert(simplify("1", "5", "1", "5") == false);
    std::cout << "Program execution ended successfully." << std::endl;
    return 0;
}