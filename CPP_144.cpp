bool simplify(string x, string n) {
    int x_numerator = stoi(x.substr(0, x.find("/")));
    int x_denominator = stoi(x.substr(x.find("/") + 1));
    int n_numerator = stoi(n.substr(0, n.find("/")));
    int n_denominator = stoi(n.substr(n.find("/") + 1));

    int result_numerator = x_numerator * n_numerator;
    int result_denominator = x_denominator * n_denominator;

    return result_numerator % result_denominator == 0;
}