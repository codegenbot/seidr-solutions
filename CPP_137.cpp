boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        return boost::any_cast<string>(a);
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        return b;
    }
    return "None";
}