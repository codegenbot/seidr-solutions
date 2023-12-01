bool simplify(string x, string n) {
    // Extracting numerator and denominator from x and n
    int x_num = stoi(x.substr(0, x.find("/")));
    int x_den = stoi(x.substr(x.find("/") + 1));
    int n_num = stoi(n.substr(0, n.find("/")));
    int n_den = stoi(n.substr(n.find("/") + 1));

    // Calculating the product of x and n
    int product_num = x_num * n_num;
    int product_den = x_den * n_den;

    // Checking if the product is a whole number
    if (product_num % product_den == 0) {
        return true;
    } else {
        return false;
    }
}