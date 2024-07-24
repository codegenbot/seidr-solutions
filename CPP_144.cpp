int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int num1 = stoi(x.substr(0, x.find("/")));
    int denom1 = stoi(x.substr(x.find("/") + 1));
    int num2 = stoi(n.substr(0, n.find("/")));
    int denom2 = stoi(n.substr(n.find("/") + 1));
    
    int num = num1 * num2;
    int denom = denom1 * denom2;
    
    int common = gcd(num, denom);
    
    if (denom / common == 1)
        return true;
    else
        return false;
}