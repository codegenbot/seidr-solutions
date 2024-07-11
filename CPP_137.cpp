```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(str) > f ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return stod(str) > d ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stof(str) > i ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return f > stof(str) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return d > stod(str) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return i > stoi(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stod(str1) > stod(str2) ? a : b;
    }
    else if (boost::any_cast<float>(a) == boost::any_cast<float>(b)) {
        return "None";
    }
    return a;
}