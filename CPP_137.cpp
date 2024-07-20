boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return "None";
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b);
    }
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    }
    if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
        return a;
    }
    if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
        return a;
    }
    return "None";
}