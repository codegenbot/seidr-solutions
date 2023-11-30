bool simplify(string x, string n) {
    // Extract the numerators and denominators from the strings
    int x_num = stoi(x.substr(0, x.find("/")));
    int x_den = stoi(x.substr(x.find("/") + 1));
    int n_num = stoi(n.substr(0, n.find("/")));
    int n_den = stoi(n.substr(n.find("/") + 1));

    // Calculate the product of the fractions
    int product_num = x_num * n_num;
    int product_den = x_den * n_den;

    // Check if the product is a whole number
    if (product_den % product_num == 0) {
        return true;
    } else {
        return false;
    }
}