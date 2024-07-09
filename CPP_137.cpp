if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double ad = boost::any_cast<double>(a);
    double bd = boost::any_cast<double>(b);
    if (ad > bd)
        return a;
    else if (ad < bd)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string as = boost::any_cast<string>(a);
    string bs = boost::any_cast<string>(b);
    if (as > bs)
        return a;
    else if (as < bs)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(int) && b.type() != typeid(int)) {
    int ai = boost::any_cast<int>(a);
    double bd = boost::any_cast<double>(b);
    if (ai > bd)
        return a;
    else if (ai < bd)
        return b;
    else
        return boost::any("None");
} else if (a.type() != typeid(int) && b.type() == typeid(int)) {
    double ad = boost::any_cast<double>(a);
    int bi = boost::any_cast<int>(b);
    if (ad > bi)
        return a;
    else if (ad < bi)
        return b;
    else
        return boost::any("None");
} else {
    // convert to string and compare
    string as = boost::any_cast<string>(a);
    double bd = boost::any_cast<double>(b);
    char cs[10];
    sprintf(cs, "%f", bd);
    if (as > cs)
        return a;
    else if (as < cs)
        return b;
    else
        return boost::any("None");
}