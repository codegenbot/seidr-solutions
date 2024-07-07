if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double ad = boost::any_cast<double>(a);
    double bd = boost::any_cast<double>(b);
    if (ad > bd)
        return a;
    else if (ad < bd)
        return b;
    else
        return "None";
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string as = boost::any_cast<string>(a);
    string bs = boost::any_cast<string>(b);
    if (as > bs)
        return a;
    else if (as < bs)
        return b;
    else
        return "None";
} else if (a.type() == typeid(int) && b.type() == typeid(double)) {
    int ai = boost::any_cast<int>(a);
    double bd = boost::any_cast<double>(b);
    if (ai > bd)
        return a;
    else if (ai < bd)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(int)) {
    double ad = boost::any_cast<double>(a);
    int bi = boost::any_cast<int>(b);
    if (ad > bi)
        return a;
    else if (ad < bi)
        return b;
    else
        return "None";
} else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    string as = boost::any_cast<string>(a);
    int bi = boost::any_cast<int>(b);
    if (as > to_string(bi))
        return a;
    else if (as < to_string(bi))
        return b;
    else
        return "None";
} else if (a.type() == typeid(int) && b.type() == typeid(string)) {
    int ai = boost::any_cast<int>(a);
    string bs = boost::any_cast<string>(b);
    if (to_string(ai) > bs)
        return a;
    else if (to_string(ai) < bs)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(string)) {
    double ad = boost::any_cast<double>(a);
    string bs = boost::any_cast<string>(b);
    if (to_string(ad) > bs)
        return a;
    else if (to_string(ad) < bs)
        return b;
    else
        return "None";
} else {
    return "Invalid input";
}