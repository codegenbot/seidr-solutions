bool simplify(string x, string n) {
    if (stoi(n.substr(n.find('/') + 1)) == 0) 
        return false;

    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    size_t pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find '/';
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    int productNumerator = numerator1 * numerator2;
    int productDenominator = denominator1 * denominator2;

    return productNumerator == productDenominator;
}