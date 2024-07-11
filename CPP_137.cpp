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
        wstring s1 = boost::any_cast<wstring>(a);
        wstring s2 = boost::any_cast<wstring>(b);
        if (s1 > s2)
            return a;
        else if (s2 > s1)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("Error: Invalid type");
    }
}