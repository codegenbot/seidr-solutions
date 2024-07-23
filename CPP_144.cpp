```c++
int productNumerator = numerator1 * numerator2;
if (denominator2 != 0) {
    int productDenominator = denominator1 * denominator2;
    if (productDenominator == 0)
        return false; // Check for zero denominators
    return productNumerator % productDenominator == 0;
}
return false;