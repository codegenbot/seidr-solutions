bool simplify(string x, string n) {
    int numeratorX = stoi(x.substr(0, x.find("/")));
    int denominatorX = stoi(x.substr(x.find("/") + 1));
    int numeratorN = stoi(n.substr(0, n.find("/")));
    int denominatorN = stoi(n.substr(n.find("/") + 1));

    int result = numeratorX * numeratorN;
    int remainder = result % (denominatorX * denominatorN);

    return remainder == 0;
}