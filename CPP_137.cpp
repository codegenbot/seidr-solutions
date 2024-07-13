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
} else if ((a.type() == typeid(string) && b.type() == typeid(int)) || 
           (a.type() == typeid(int) && b.type() == typeid(string))) {
    string astr = boost::any_cast<string>(a);
    int bi = boost::any_cast<int>(b);
    return (stoi(astr) > bi) ? a : ((stoi(astr) < bi) ? b : "None");
} else if ((a.type() == typeid(string) && b.type() == typeid(double)) || 
           (a.type() == typeid(double) && b.type() == typeid(string))) {
    string astr = boost::any_cast<string>(a);
    double bd = boost::any_cast<double>(b);
    return (stod(astr) > bd) ? a : ((stod(astr) < bd) ? b : "None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string astr = boost::any_cast<string>(a);
    string bstr = boost::any_cast<string>(b);
    return (stod(astr) > stod(bstr)) ? a : ((stod(astr) < stod(bstr)) ? b : "None");
}
return "None";