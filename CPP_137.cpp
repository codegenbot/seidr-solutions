if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
           (b.type() == typeid(float) || b.type() == typeid(double))) {
    double ad = boost::any_cast<double>(a);
    double bd = boost::any_cast<double>(b);
    if (ad > bd)
        return a;
    else if (ad < bd)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    wstring wa = boost::any_cast<wstring>(a);
    wstring wb = boost::any_cast<wstring>(b);
    if (wa > wb)
        return a;
    else if (wa < wb)
        return b;
    else
        return boost::any("None");
} else {
    return boost::any("None");
}