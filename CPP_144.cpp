```cpp
#include <string>

bool simplify(const std::string& numeratorStr, const std::string& denominatorStr) {
    int numerator = 0, denominator1 = 0, denominator2 = 0;
    numerator = std::stoi(numeratorStr);
    if (numerator == 0) return false; 
    size_t pos = denominatorStr.find("/");
    denominator1 = std::stoi(denominatorStr.substr(0, pos));
    denominator2 = std::stoi(denominatorStr.substr(pos + 1));
    int productDenominator = denominator1 * denominator2;
    if (productDenominator == 0)
        return false; 
    return numerator % (denominator1 * denominator2) == 0;
}