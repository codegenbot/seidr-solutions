bool simplify(string x, string n) {
    int numX = stoi(x.substr(0, x.find("/")));
    int denX = stoi(x.substr(x.find("/") + 1));
    int numN = stoi(n.substr(0, n.find("/")));
    int denN = stoi(n.substr(n.find("/") + 1));

    int result = numX * numN;
    int commonDen = denX * denN;

    return result % commonDen == 0;
}