bool simplify(string x, string n){
    int numerator_x = stoi(x.substr(0, x.find("/")));
    int denominator_x = stoi(x.substr(x.find("/") + 1));
    int numerator_n = stoi(n.substr(0, n.find("/")));
    int denominator_n = stoi(n.substr(n.find("/") + 1));

    int product_numerator = numerator_x * numerator_n;
    int product_denominator = denominator_x * denominator_n;

    return product_numerator % product_denominator == 0;
}