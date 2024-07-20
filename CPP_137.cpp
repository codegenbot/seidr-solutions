boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int x = boost::any_cast<int>(a);
        return stof(s) > x ? b : a == b ? boost::any("None") : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<float>(a) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int x = boost::any_cast<int>(b);
        return stof(s) > x ? a : x > stof(s) ? b : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s1 = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return stod(s1) > d ? a : d > stod(s1) ? b : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s2 = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(s2) > f ? a : f > stof(s2) ? b : boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double d1 = boost::any_cast<double>(a);
        int x1 = boost::any_cast<int>(b);
        return d1 > x1 ? a : x1 > d1 ? b : boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        double d2 = boost::any_cast<double>(a);
        float f1 = boost::any_cast<float>(b);
        return d2 > f1 ? a : f1 > d2 ? b : boost::any("None");
    }
    return b;
}