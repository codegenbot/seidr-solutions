bool simplify(string x, string n) {
    // Split the strings into numerators and denominators
    int numX = stoi(x.substr(0, x.find("/")));
    int denX = stoi(x.substr(x.find("/") + 1));
    int numN = stoi(n.substr(0, n.find("/")));
    int denN = stoi(n.substr(n.find("/") + 1));
    
    // Multiply x and n
    int resultNum = numX * numN;
    int resultDen = denX * denN;

    // Check if the result is a whole number
    if (resultNum % resultDen == 0) {
        return true;
    } else {
        return false;
    }
}