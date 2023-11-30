bool simplify(string x, string n) {
    // extract the numerators and denominators from the fractions
    int xNum = stoi(x.substr(0, x.find("/")));
    int xDen = stoi(x.substr(x.find("/") + 1));
    int nNum = stoi(n.substr(0, n.find("/")));
    int nDen = stoi(n.substr(n.find("/") + 1));

    // check if x * n evaluates to a whole number
    if (xNum * nNum % (xDen * nDen) == 0) {
        return true;
    } else {
        return false;
    }
}