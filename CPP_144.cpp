bool simplify(string x, string n) {
    int x_numerator, x_denominator, n_numerator, n_denominator;
    sscanf(x.c_str(), "%d/%d", &x_numerator, &x_denominator);
    sscanf(n.c_str(), "%d/%d", &n_numerator, &n_denominator);

    double result = (double)x_numerator / x_denominator * (double)n_numerator / n_denominator;
    return result == (int)result;
}