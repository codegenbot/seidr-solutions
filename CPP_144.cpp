bool simplify(string x, string n) {
    int xNumerator = stoi(x.substr(0, x.find('/')));
    int xDenominator = stoi(x.substr(x.find('/') + 1));
    int nNumerator = stoi(n.substr(0, n.find('/')));
    int nDenominator = stoi(n.substr(n.find('/') + 1));
    
    if ((xNumerator * nDenominator) == (xDenominator * nNumerator)) {
        return true;
    } else {
        return false;
    }
}