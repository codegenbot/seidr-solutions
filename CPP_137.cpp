if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return boost::any("None");
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (stod(x) > stod(y)) return a;
    else if (stod(x) < stod(y)) return b;
    else return boost::any("None");
} else {
    return boost::any("None");
}