#include <iostream>
#include <sstream>
#include <string>

bool simplify(const std::string& x, const std::string& n) {
    int num1, denom1, num2, denom2;
    char slash;

    // Parse the first fraction
    std::stringstream ss1(x);
    ss1 >> num1 >> slash >> denom1;
    
    // Parse the second fraction
    std::stringstream ss2(n);
    ss2 >> num2 >> slash >> denom2;
    
    // Multiply the fractions
    int result_num = num1 * num2;
    int result_denom = denom1 * denom2;
    
    // Check if the result is a whole number
    return result_num % result_denom == 0;
}

int main() {
    std::cout << std::boolalpha; // Print boolean values as 'true' or 'false'
    std::cout << simplify("1/5", "1/5") << std::endl; // Output: false
    return 0;
}