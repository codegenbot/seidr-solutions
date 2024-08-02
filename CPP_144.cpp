bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    int numerator1 = 0, denominator1 = 0, numerator2 = 0, denominator2 = 0;

    // Convert the fractions to integers
    sscanf(x.c_str(), "%d/%d", &a, &b);
    sscanf(n.c_str(), "%d/%d", &c, &d);

    // Calculate the least common multiple of b and d
    numerator1 = a * d;
    denominator1 = b * d;

    // Calculate the greatest common divisor of a*d and b*d
    for (int i = 1; i <= numerator1; i++) {
        if ((i > 1) && (numerator1 % i == 0) && (denominator1 % i == 0)) {
            numerator2 = numerator1 / i;
            denominator2 = denominator1 / i;
            return (a * c) % (b * d) != 0;
        }
    }

    return true;
}