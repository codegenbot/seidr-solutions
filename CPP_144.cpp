bool simplify(string x, string n) {
    int x_num, x_den, n_num, n_den;
    int stoi(string);

    x_num = stoi(x.substr(0, x.find("/")));
    x_den = stoi(x.substr(x.find("/") + 1));
    n_num = stoi(n.substr(0, n.find("/")));
    n_den = stoi(n.substr(n.find("/") + 1));

    return (x_num * n_num) % (x_den * n_den) == 0;
}