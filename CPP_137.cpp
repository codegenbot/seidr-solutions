if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (bi > ai)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double ad = boost::any_cast<double>(a);
    double bd = boost::any_cast<double>(b);
    if (ad > bd)
        return a;
    else if (bd > ad)
        return b;
    else
        return "None";
} else if ((a.type() == typeid(string) || a.type() == typeid(wchar_t*)) &&
           (b.type() == typeid(string) || b.type() == typeid(wchar_t*))) {
    string astr = boost::any_cast<string>(a);
    string bstr = boost::any_cast<string>(b);
    if (astr > bstr)
        return a;
    else if (bstr > astr)
        return b;
    else
        return "None";
} else {
    return "None";
}