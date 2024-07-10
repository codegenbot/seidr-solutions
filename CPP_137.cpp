boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        double dx = stod(x), dy = stod(y);
        return (dx > dy) ? a : ((dx < dy) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return (stod(x) > y) ? a : ((stod(x) < y) ? b : boost::any("None"));
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return (x > stod(y)) ? a : ((x < stod(y)) ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}