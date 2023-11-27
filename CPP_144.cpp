bool simplify(string x, string n) {
    int xNumerator, xDenominator, nNumerator, nDenominator;
    sscanf(x.c_str(), "%d/%d", &xNumerator, &xDenominator);
    sscanf(n.c_str(), "%d/%d", &nNumerator, &nDenominator);

    int resultNumerator = xNumerator * nNumerator;
    int resultDenominator = xDenominator * nDenominator;

    if (resultDenominator % resultNumerator == 0) {
        return true;
    } else {
        return false;
    }
}