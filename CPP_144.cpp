bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0, numerator2 = 0, denominator2 = 0;
    istringstream iss(x);
    iss >> numerator1 >> '/' >> denominator1;
    iss.clear();
    iss.str(n);
    iss >> numerator2 >> '/' >> denominator2;

    long long lcm = (long long)denominator1 * denominator2 / __gcd(denominator1, denominator2);
    long long newNumerator = (long long)numerator1 * denominator2 + numerator2 * denominator1;
    
    return newNumerator == lcm;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}