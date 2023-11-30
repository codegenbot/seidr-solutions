bool simplify(string x, string n) {
    int numeratorX, denominatorX, numeratorN, denominatorN;
    sscanf(x.c_str(), "%d/%d", &numeratorX, &denominatorX);
    sscanf(n.c_str(), "%d/%d", &numeratorN, &denominatorN);
    
    if (numeratorX * denominatorN == numeratorN * denominatorX) {
        return true;
    } else {
        return false;
    }
}