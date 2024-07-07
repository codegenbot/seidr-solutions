if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return boost::any("None");
} else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
           (b.type() == typeid(float) || b.type() == typeid(double))) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return boost::any("None");
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    wstring s = boost::any_cast<wstring>(a);
    wstring t = boost::any_cast<wstring>(b);
    if (s > t) return a;
    else if (s < t) return b;
    else return boost::any(L"None");
} else
    return boost::any("None");