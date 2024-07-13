if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(string)) {
    double x = boost::any_cast<double>(a);
    string y = boost::any_cast<string>(b);
    if (stod(y) > x)
        return b;
    else
        return a;
} else if (a.type() == typeid(string) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(b);
    string y = boost::any_cast<string>(a);
    if (stod(y) > x)
        return a;
    else
        return b;
} else {
    return "None";
}