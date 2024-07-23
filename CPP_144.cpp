```cpp
#include <string>
bool simplify(const std::string& numeratorStr, const std::string& denominatorStr) {
    int numerator = 0, denominator1 = 0, denominator2 = 0;
    size_t pos = numeratorStr.find("/");
    numerator = std::stoi(numeratorStr.substr(0, pos));
    denominator1 = std::stoi(numeratorStr.substr(pos + 1));
    if (numerator == 0) return false; 
    pos = denominatorStr.find("/");
    denominator2 = std::stoi(denominatorStr.substr(0, pos));
    int productDenominator = denominator2;
    if (productDenominator == 0)
        return false; 
    return numerator % productDenominator == 0;
}