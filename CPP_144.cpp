bool simplify(string x, string n) {
    int numeratorX = 0, denominatorX = 0, numeratorN = 0, denominatorN = 0;
    
    size_t pos = 0;
    pos = x.find('/');
    int num1 = stoi(x.substr(0, pos));
    int deno1 = stoi(x.substr(pos + 1));
    
    pos = n.find('/');
    int num2 = stoi(n.substr(0, pos));
    int deno2 = stoi(n.substr(pos + 1));
    
    if((num1 * deno2) == (deno1 * num2)) {
        return true;
    } else {
        return false;
    }
}