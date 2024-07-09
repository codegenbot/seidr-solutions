int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int num1 = stoi(x.substr(0, x.find_first_of("/")));
    int den1 = stoi(x.substr(x.find_first_of("/") + 1));
    int num2 = stoi(n.substr(0, n.find_first_of("/")));
    int den2 = stoi(n.substr(n.find_first_of("/") + 1));

    int numerator = num1 * num2;
    int denominator = den1 * den2;

    int divisor = gcd(numerator, denominator);

    if (denominator / divisor == 1) {
        return true;
    } else {
        return false;
    }
}