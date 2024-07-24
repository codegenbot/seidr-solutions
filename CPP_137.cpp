```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a < (int)b ? b : (int)a;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)a).compare((string)b) > 0 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < (float)b ? boost::any_cast<boost::any>(b) : &a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return ((string)a).compare(to_string((int)b)) > 0 ? a : boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return to_string((int)a).compare((string)b) > 0 ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<float>(a) > stod((string)b) ? a : b;
    }
    return boost::any("None");
}