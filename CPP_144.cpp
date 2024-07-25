int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int numerator1 = stoi(x.substr(0, x.find('/')));
    int denominator1 = stoi(x.substr(x.find('/') + 1));
    int numerator2 = stoi(n.substr(0, n.find('/')));
    int denominator2 = stoi(n.substr(n.find('/') + 1));

    int num = numerator1 * numerator2;
    int den = denominator1 * denominator2;

    int common = gcd(num, den);
    if (common != 1) {
        num /= common;
        den /= common;
    }

    return den == 1;
}