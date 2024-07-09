boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((boost::any_cast<string>(b)).find(',') != string::npos)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
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
        return boost::any("None");
    }
}