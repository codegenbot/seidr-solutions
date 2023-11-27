bool simplify(string x, string n) {
    // Extract numerator and denominator from x and n
    int x_numerator = stoi(x.substr(0, x.find("/")));
    int x_denominator = stoi(x.substr(x.find("/") + 1));
    int n_numerator = stoi(n.substr(0, n.find("/")));
    int n_denominator = stoi(n.substr(n.find("/") + 1));

    // Calculate the product of x and n
    int product_numerator = x_numerator * n_numerator;
    int product_denominator = x_denominator * n_denominator;

    // Check if the product is a whole number
    if (product_denominator % product_numerator == 0) {
        return true;
    } else {
        return false;
    }
}