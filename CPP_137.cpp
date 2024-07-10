boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? boost::any(b)
            : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? boost::any(a) : boost::any("None"));
    }
    if ((a.type() == typeid(float) && b.type() == typeid(int)) ||
        (a.type() == typeid(int) && b.type() == typeid(float))) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b) ? boost::any(a)
            : (boost::any_cast<int>(b) > boost::any_cast<float>(a) ? boost::any(b) : boost::any("None")));
    }
    if ((a.type() == typeid(float) && b.type() == typeid(float)) ||
        (a.type() == typeid(double) && b.type() == typeid(double))) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b) ? boost::any(a)
            : (boost::any_cast<float>(b) > boost::any_cast<float>(a) ? boost::any(b) : boost::any("None")));
    }
    if ((a.type() == typeid(string) && b.type() == typeid(int)) ||
        (a.type() == typeid(int) && b.type() == typeid(string))) {
        return boost::any_cast<string>(a) > boost::any_cast<int>(b)
            ? boost::any(a)
            : (boost::any_cast<int>(b) > boost::any_cast<string>(a) ? boost::any(b) : boost::any("None"));
    }
    if ((a.type() == typeid(string) && b.type() == typeid(float)) ||
        (a.type() == typeid(float) && b.type() == typeid(string))) {
        return boost::any_cast<string>(a) > boost::any_cast<float>(b)
            ? boost::any(a)
            : (boost::any_cast<float>(b) > boost::any_cast<string>(a) ? boost::any(b) : boost::any("None"));
    }
    if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b)
            ? boost::any(a)
            : (boost::any_cast<string>(b) > boost::any_cast<string>(a) ? boost::any(b) : boost::any("None"));
    }
    return "Error";
}