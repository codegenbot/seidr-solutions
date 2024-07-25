boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : (double)b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : (string)b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return (string)a > std::to_string((double)b) ? a : boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return std::to_string((double)a) > (string)b ? a : boost::any("None");
    }
    return boost::any("None");
}