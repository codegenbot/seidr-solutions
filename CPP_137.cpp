if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
           (b.type() == typeid(double) || b.type() == typeid(float))) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) && (b.type() == typeid(int) || 
                                            b.type() == typeid(double) || 
                                            b.type() == typeid(float)))) {
    string s = boost::any_cast<string>(a);
    double y = boost::any_cast<double>(b);
    return (stod(s) > y) ? a : ((y > stod(s)) ? b : boost::any("None"));
} else if ((b.type() == typeid(string) && (a.type() == typeid(int) || 
                                            a.type() == typeid(double) || 
                                            a.type() == typeid(float)))) {
    string s = boost::any_cast<string>(b);
    double x = boost::any_cast<double>(a);
    return (stod(s) > x) ? b : ((x > stod(s)) ? a : boost::any("None"));
} else
    return boost::any("None");