boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    } else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(double))) {
        return (int)a > boost::any_cast<float>(b) ? a : b;
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > (int)b ? a : b;
    }
    return "None";
}