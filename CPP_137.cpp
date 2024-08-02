boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)b > (int)a ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)b > (int)a ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = (int)a;
        if (str.length() > 0 && str[0] == ',') {
            str = str.substr(1);
        }
        double d = stod(str);
        return d > num ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<float>(a) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = (int)b;
        if (str.length() > 0 && str[0] == ',') {
            str = str.substr(1);
        }
        double d = stod(str);
        return d > num ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        if (str.length() > 0 && str[0] == ',') {
            str = str.substr(1);
        }
        return stod(str) > d ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1.length() > 0 && str1[0] == ',') {
            str1 = str1.substr(1);
        }
        if (str2.length() > 0 && str2[0] == ',') {
            str2 = str2.substr(1);
        }
        return stod(str1) > stod(str2) ? a : b;
    } else {
        return boost::any("None");
    }
}