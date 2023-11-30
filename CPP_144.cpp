bool simplify(string x, string n) {
    // Extracting numerators and denominators
    int xNum = stoi(x.substr(0, x.find("/")));
    int xDen = stoi(x.substr(x.find("/") + 1));
    int nNum = stoi(n.substr(0, n.find("/")));
    int nDen = stoi(n.substr(n.find("/") + 1));
    
    // Calculating the product
    int productNum = xNum * nNum;
    int productDen = xDen * nDen;
    
    // Checking if the product is a whole number
    if (productDen % productNum == 0) {
        return true;
    } else {
        return false;
    }
}