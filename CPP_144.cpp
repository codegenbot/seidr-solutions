#include <sstream>
#include <string>

bool simplify(std::string x, std::string n) {
    int num1, den1, num2, den2;
    char slash;
    
    // Parse the first fraction
    std::stringstream ss1(x);
    ss1 >> num1 >> slash >> den1;
    
    // Parse the second fraction
    std::stringstream ss2(n);
    ss2 >> num2 >> slash >> den2;
    
    // Calculate the product of the two fractions
    int product_num = num1 * num2;
    int product_den = den1 * den2;
    
    // Check if the product is a whole number
    return (product_num % product_den == 0);
}