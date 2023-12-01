bool simplify(string x,string n){
    int numeratorX, numeratorN, denominatorX, denominatorN;
    
    // Extracting numerator and denominator of x and n
    sscanf(x.c_str(), "%d/%d", &numeratorX, &denominatorX);
    sscanf(n.c_str(), "%d/%d", &numeratorN, &denominatorN);
    
    // Simplifying the expression
    int numeratorResult = numeratorX * numeratorN;
    int denominatorResult = denominatorX * denominatorN;
    
    // Check if the result is a whole number
    if (numeratorResult % denominatorResult == 0) {
        return true;
    } else {
        return false;
    }
}