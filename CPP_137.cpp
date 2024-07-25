boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s1 > s2 ? &a : (s2 > s1 ? &b : boost::any("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int x = boost::any_cast<int>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if (a.type() == typeid(int) && (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        int x = boost::any_cast<int>(a);
        string s2 = boost::any_cast<string>(b);
        return (x > 0 ? &a : (s2 > "0" ? &b : boost::any("None")));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               b.type() == typeid(int)) {
        string s1 = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (s1 > "0" ? &a : (y > 0 ? &b : boost::any("None")));
    } else {
        return boost::any("Invalid input");
    }
}