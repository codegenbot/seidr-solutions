```
any compare(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : any(typeid(int)));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : (x < y ? b : any(typeid(double)));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return x > y ? a : (x < y ? b : any(typeid(string)));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return stod(x) > y ? a : (stod(x) < y ? b : any(typeid(string)));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return x > stod(y) ? a : (x < stod(y) ? b : any(typeid(double)));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}