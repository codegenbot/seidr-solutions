boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > static_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > to_string(static_cast<int>(a)) ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return static_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double b_double = boost::any_cast<double>(b);
        return b_double > stod(boost::any_cast<string>(a)) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return s2 > s1 ? b : a;
    }
    return "None";
}