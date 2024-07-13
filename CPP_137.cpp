boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<float>(b) > boost::any_cast<float>(a) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return d > stod(s.substr(1, s.length()-2)) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return s2 > s1 ? b : a;
    }
    else {
        return "None";
    }
}