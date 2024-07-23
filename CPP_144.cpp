bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    size_t pos = x.find('/');
    if (pos == string::npos || !isdigit(x[0]) || !isdigit(x.substr(pos + 1)[0])) {
        // invalid fraction
        return false;
    }
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find('/');
    if (pos == string::npos || !isdigit(n[0]) || !isdigit(n.substr(pos + 1)[0])) {
        // invalid fraction
        return false;
    }
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    if (denominator2 == 0) {
        return false; 
    }

    int productNumerator = numerator1 * numerator2;
    int productDenominator = denominator1 * denominator2;

    return productNumerator % productDenominator == 0;
}