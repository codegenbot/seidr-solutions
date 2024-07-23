boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) b > (int) a ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) b > (int) a ? boost::any(b) : boost::any(a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string) a > (string) b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return string("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return string(b.convert_to<string>().c_str()) > to_string(a.convert_to<int>()) ? boost::any(b) : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return string(b.convert_to<string>().c_str()) > to_string(a.convert_to<int>()) ? boost::any(b) : a;
    } else {
        return boost::any("None");
    }
}