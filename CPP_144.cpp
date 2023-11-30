bool simplify(string x, string n) {
    // Extracting numerator and denominator from x and n
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    // Simplifying the fractions
    int gcd_x = __gcd(x_num, x_den);
    int gcd_n = __gcd(n_num, n_den);
    x_num /= gcd_x;
    x_den /= gcd_x;
    n_num /= gcd_n;
    n_den /= gcd_n;

    // Checking if x * n evaluates to a whole number
    return (x_num * n_num) % (x_den * n_den) == 0;
}