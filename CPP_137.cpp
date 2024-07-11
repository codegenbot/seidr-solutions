if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
            return a;
        } else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(boost::any_cast<string>(a)) > stod(boost::any_cast<string>(b))) {
            return a;
        } else if (stod(boost::any_cast<string>(a)) < stod(boost::any_cast<string>(b))) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}