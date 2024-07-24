boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(int)) ||
             (a.type() == typeid(int) && b.type() == typeid(double))) {
        double x = boost::any_cast<double>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    }
    else if ((a.type() == typeid(string) && b.type() == typeid(double)) ||
             (a.type() == typeid(double) && b.type() == typeid(string))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return (stod(x) > y ? &a : (y > stod(x) ? &b : boost::any("None")));
    }
    else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(y) > stod(x) ? &b : (stod(x) > stod(y) ? &a : boost::any("None")));
    }
    else {
        throw invalid_argument("Invalid types");
    }
}