bool simplify(string x, string n) {
    int numeratorX, denominatorX, numeratorN, denominatorN;
    
    // Extract numerator and denominator from x
    int slashIndex = x.find('/');
    numeratorX = stoi(x.substr(0, slashIndex));
    denominatorX = stoi(x.substr(slashIndex + 1));
    
    // Extract numerator and denominator from n
    slashIndex = n.find('/');
    numeratorN = stoi(n.substr(0, slashIndex));
    denominatorN = stoi(n.substr(slashIndex + 1));
    
    // Check if x * n is a whole number
    if (numeratorX * numeratorN % (denominatorX * denominatorN) == 0) {
        return true;
    } else {
        return false;
    }
}