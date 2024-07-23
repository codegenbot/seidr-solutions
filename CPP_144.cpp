int simplify(string numerator1, string numerator2, string denominator1, string denominator2) {
    int productNumerator = stoi(numerator1) * stoi(numerator2);
    if (stoi(denominator2) != 0) {
        int productDenominator = stoi(denominator1) * stoi(denominator2);
        if (productDenominator == 0)
            return false; // Check for zero denominators
        return productNumerator % productDenominator == 0;
    }
    return false;
}

int main() {
    assert(simplify("1", "1", "5", "5") == false);
    return 0;
}