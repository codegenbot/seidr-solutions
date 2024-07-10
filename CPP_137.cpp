boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((boost::any_cast<string>(a)).compare("0") > 0)
            return a;
        else
            return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b).compare("0.") > 0 || boost::any_cast<string>(b).compare(",0") > 0)
            return b;
        else
            return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a).compare("None") != 0 &&
                boost::any_cast<string>(b).compare("None") != 0) {
            if (boost::any_cast<string>(a).compare(boost::any_cast<string>(b)) > 0)
                return a;
            else if (boost::any_cast<string>(a).compare(boost::any_cast<string>(b)) < 0)
                return b;
        }
        return "None";
    }
    return "None";
}