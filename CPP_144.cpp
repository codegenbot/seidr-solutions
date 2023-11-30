bool simplify(string x, string n){
    int numerator_x, denominator_x, numerator_n, denominator_n;
    
    sscanf(x.c_str(), "%d/%d", &numerator_x, &denominator_x);
    sscanf(n.c_str(), "%d/%d", &numerator_n, &denominator_n);
    
    if (numerator_x * denominator_n == numerator_n * denominator_x)
        return true;
    else
        return false;
}