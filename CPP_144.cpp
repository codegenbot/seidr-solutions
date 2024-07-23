bool simplify(const std::string& numeratorStr, const std::string& denominatorStr) {
    int numerator = 0, denominator1 = 0, denominator2 = 0;
    
    size_t numeratorPos = numeratorStr.find('/');
    size_t denominator1Pos = denominatorStr.find('/');
    
    const char* numeratorPart = numeratorStr.substr(0, numeratorPos).c_str();
    const char* denominator1Part = denominatorStr.substr(0, denominator1Pos).c_str();
    const char* denominator2Part = denominatorStr.substr(denominator1Pos + 1).c_str();
    
    if (numeratorPart[0] == '\0' || denominator1Part[0] == '\0' || denominator2Part[0] == '\0')
        return false;
    
    numerator = std::stoi(numeratorPart);
    denominator1 = std::stoi(denominator1Part);
    denominator2 = std::stoi(denometer2Part);
    
    int productDenominator = denominator1 * denominator2;
    if (productDenominator == 0)
        return false; 
    return numerator % productDenominator == 0;
}