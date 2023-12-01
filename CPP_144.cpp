bool simplify(string x, string n){
    int numX = stoi(x.substr(0, x.find("/")));
    int denX = stoi(x.substr(x.find("/") + 1));
    int numN = stoi(n.substr(0, n.find("/")));
    int denN = stoi(n.substr(n.find("/") + 1));
    
    double result = (numX * denN) / (denX * numN);
    
    return result == (int)result;
}