int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int numerator_x = stoi(x.substr(0, x.find('/')));
    int denominator_x = stoi(x.substr(x.find('/') + 1));
    int numerator_n = stoi(n.substr(0, n.find('/')));
    int denominator_n = stoi(n.substr(n.find('/') + 1));

    int numerator_result = numerator_x * numerator_n;
    int denominator_result = denominator_x * denominator_n;

    int gcd_result = gcd(numerator_result, denominator_result);

    return denominator_result / gcd_result == 1;
}