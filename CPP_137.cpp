```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
            return a;
        else if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
            return b;
        else
            return boost::any("None");
    }
}