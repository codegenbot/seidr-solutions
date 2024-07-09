int numerator1 = stoi(x.substr(0, x.find('/')));
    int denominator1 = stoi(x.substr(x.find('/') + 1));
    int numerator2 = stoi(n.substr(0, n.find('/')));
    int denominator2 = stoi(n.substr(n.find('/') + 1));
    
    return (numerator1 * denominator2 == numerator2 * denominator1);
}