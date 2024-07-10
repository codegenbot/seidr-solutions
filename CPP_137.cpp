boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    } else if ((a.type() == typeid(string) || a.type() == typeid(float)) &&
               (b.type() == typeid(string) || b.type() == typeid(float))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > strA) ? b : ((strA > strB) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any_cast<string>(a) > to_string(boost::any_cast<int>(b))) ? a : ((boost::any_cast<string>(a) < to_string(boost::any_cast<int>(b))) ? boost::any("None") : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (to_string(a) > boost::any_cast<string>(b)) ? a : ((to_string(a) < boost::any_cast<string>(b)) ? boost::any("None") : b);
    }
    return boost::any();
}