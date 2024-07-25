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
} else if ((a.type() == typeid(string) && b.type() == typeid(int)) ||
           (a.type() == typeid(int) && b.type() == typeid(string))) {
    string s = boost::any_cast<string>(a);
    int y = boost::any_cast<int>(b);
    return (stod(s) > y) ? a : ((y > stod(s)) ? b : "None");
} else if ((a.type() == typeid(string) && b.type() == typeid(double)) ||
           (a.type() == typeid(double) && b.type() == typeid(string))) {
    string s = boost::any_cast<string>(a);
    double y = boost::any_cast<double>(b);
    return (stod(s) > y) ? a : ((y > stod(s)) ? b : "None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string s1 = boost::any_cast<string>(a);
    string s2 = boost::any_cast<string>(b);
    return (stod(s1) > stod(s2)) ? a : ((stod(s2) > stod(s1)) ? b : "None");
}
return "None";