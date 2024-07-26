int x_numerator = stoi(x.substr(0, x.find("/")));
    int x_denominator = stoi(x.substr(x.find("/") + 1));
    
    int n_numerator = stoi(n.substr(0, n.find("/")));
    int n_denominator = stoi(n.substr(n.find("/") + 1));
    
    return (x_numerator * n_denominator) % (x_denominator * n_numerator) == 0;
}