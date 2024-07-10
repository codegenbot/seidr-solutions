```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi ? &bi : (ai < bi ? &ai : "None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        return (ad > bd ? &bd : (ad < bd ? &ad : "None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(int)) || 
               (a.type() == typeid(int) && b.type() == typeid(string))) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<int>(b);
        return (stod(s) > d ? &s : (stod(s) < d ? &d : "None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(double)) || 
               (a.type() == typeid(double) && b.type() == typeid(string))) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return (stod(s) > d ? &s : (stod(s) < d ? &d : "None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (stod(s1) > stod(s2) ? &s2 : (stod(s1) < stod(s2) ? &s1 : "None"));
    }
}