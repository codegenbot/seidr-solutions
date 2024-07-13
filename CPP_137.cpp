if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return "None";
}
else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
         (b.type() == typeid(double) || b.type() == typeid(float))) {
    double ad = boost::any_cast<double>(a);
    double bd = boost::any_cast<double>(b);
    if (ad > bd)
        return a;
    else if (ad < bd)
        return b;
    else
        return "None";
}
else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if (stod(sa) > stod(sb))
        return a;
    else if (stod(sa) < stod(sb))
        return b;
    else
        return "None";
}
else {
    return "Error";
}