int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool simplify(string x,string n){
    int numerator1 = stoi(x.substr(0,x.find('/')));
    int denominator1 = stoi(x.substr(x.find('/')+1));
    int numerator2 = stoi(n.substr(0,n.find('/')));
    int denominator2 = stoi(n.substr(n.find('/')+1));

    int newNumerator = numerator1 * denominator2;
    int newDenominator = denominator1 * numerator2;

    if(gcd(newNumerator, newDenominator) != 1)
        return false;

    return true;
}