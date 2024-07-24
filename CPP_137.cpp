boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return stod(sb) > stoi(sa) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = boost::any_cast<string>(a);
        double db = boost::any_cast<double>(b);
        return stod(sa) > db ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return stod(sb) > stod(sa) ? b : a;
    }
    else {
        return boost::any("None");
    }
}