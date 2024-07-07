```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a
            : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b)
            ? a
            : (boost::any_cast<double>(a) < boost::any_cast<double>(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(double)) ||
               (a.type() == typeid(double) && b.type() == typeid(string))) {
        return boost::any(a) > boost::any(b)
            ? a
            : (boost::any(a) < boost::any(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return stol(strA) > stol(strB)
            ? a
            : (stol(strA) < stol(strB) ? b : boost::any("None"));
    } else {
        throw invalid_argument("Invalid types");
    }
}