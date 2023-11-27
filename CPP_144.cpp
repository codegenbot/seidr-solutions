bool simplify(string x, string n){
  int xNumerator, xDenominator, nNumerator, nDenominator;

  // Extract numerator and denominator from x
  size_t xDelimiterPos = x.find("/");
  xNumerator = stoi(x.substr(0, xDelimiterPos));
  xDenominator = stoi(x.substr(xDelimiterPos + 1));

  // Extract numerator and denominator from n
  size_t nDelimiterPos = n.find("/");
  nNumerator = stoi(n.substr(0, nDelimiterPos));
  nDenominator = stoi(n.substr(nDelimiterPos + 1));

  // Calculate the product of x * n
  int productNumerator = xNumerator * nNumerator;
  int productDenominator = xDenominator * nDenominator;

  // Check if the product evaluates to a whole number
  if (productNumerator % productDenominator == 0) {
    return true;
  } else {
    return false;
  }
}