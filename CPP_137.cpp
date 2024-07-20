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
} else if ((a.type() == typeid(string) || a.type() == typeid(wchar_t*)) &&
           (b.type() == typeid(string) || b.type() == typeid(wchar_t*))) {
    string s1 = boost::any_cast<string>(a);
    string s2 = boost::any_cast<string>(b);
    if (s1 > s2)
        return a;
    else if (s2 > s1)
        return b;
    else
        return "None";
} else if ((a.type() == typeid(string) || a.type() == typeid(wchar_t*)) &&
           (b.type() == typeid(double) || b.type() == typeid(int))) {
    string s = boost::any_cast<string>(a);
    double d = boost::any_cast<double>(b);
    return (stod(s) > d ? a : (d > stod(s) ? b : "None"));
} else if ((a.type() == typeid(double) || a.type() == typeid(int)) &&
           (b.type() == typeid(string) || b.type() == typeid(wchar_t*))) {
    double d = boost::any_cast<double>(a);
    string s = boost::any_cast<string>(b);
    return (d > stod(s) ? a : (stod(s) > d ? b : "None"));
} else
    throw runtime_error("Invalid types");