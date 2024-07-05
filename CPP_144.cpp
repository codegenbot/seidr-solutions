#include <sstream>

bool simplify(string x, string n) {
    int num1, denom1, num2, denom2;
    char slash;
    
    // Parse the first fraction
    stringstream ss1(x);
    ss1 >> num1 >> slash >> denom1;
    
    // Parse the second fraction
    stringstream ss2(n);
    ss2 >> num2 >> slash >> denom2;
    
    // Multiply the fractions
    int result_num = num1 * num2;
    int result_denom = denom1 * denom2;
    
    // Check if the result is a whole number
    return result_num % result_denom == 0;
}