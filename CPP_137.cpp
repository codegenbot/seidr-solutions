```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        double da = stod(sa);
        double db = stod(sb);
        return (da > db ? a : b).type() == typeid(double) ? b : a;
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string s = boost::any_cast<string>(a);
        double da = stod(s);
        return (b.type() == typeid(int) ? static_cast<int>(b) : static_cast<double>(b)) > da ? b : a;
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string s = boost::any_cast<string>(b);
        double db = stod(s);
        return (a.type() == typeid(int) ? static_cast<int>(a) : static_cast<double>(a)) > db ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any(a > b ? &a : &b);
    }
    return "None";
}