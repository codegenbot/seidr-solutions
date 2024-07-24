```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > stod(boost::any_cast<string>(a)) ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return stod(boost::any_cast<string>(a)) > boost::any_cast<double>(b) ? a : b;
    }
    return "None";
}