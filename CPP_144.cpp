int productDenominator = denominator1 * denominator2;
if (productDenominator == 0)
    return false; 
return productNumerator % productDenominator == 0;