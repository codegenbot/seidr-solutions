```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.get() > (int)b.get()) ? b : ((int)a.get() == (int)b.get() ? boost::any("None") : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.get() > (float)b.get()) ? b : ((float)a.get() == (float)b.get() ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a), str2 = any_cast<string>(b);
        return (stod(str1) > stod(str2)) ? b : ((stod(str1) == stod(str2)) ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = any_cast<string>(a);
        return (stod(str) > b.get_as<double>()) ? b : ((stod(str) == b.get_as<double>()) ? boost::any("None") : a);
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string str = any_cast<string>(b);
        return (a.get_as<double>() > stod(str)) ? a : ((a.get_as<double>() == stod(str)) ? boost::any("None") : b);
    } else {
        if (stod(any_cast<string>(a).c_str()) > a.get_as<double>()) {
            return b;
        } else if (a.get_as<double>() > stod(any_cast<string>(b).c_str())) {
            return a;
        } else {
            return boost::any("None");
        }
    }
}