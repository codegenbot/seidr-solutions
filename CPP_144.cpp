bool simplify(string x, string n){
    int xNum = stoi(x.substr(0, x.find("/")));
    int xDen = stoi(x.substr(x.find("/") + 1));
    int nNum = stoi(n.substr(0, n.find("/")));
    int nDen = stoi(n.substr(n.find("/") + 1));
    
    int productNum = xNum * nNum;
    int productDen = xDen * nDen;
    
    if (productNum % productDen == 0){
        return true;
    }
    else{
        return false;
    }
}