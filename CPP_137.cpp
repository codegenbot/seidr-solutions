boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b)
            ? a
            : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double aDouble = boost::any_cast<double>(a);
        string bString = boost::any_cast<string>(b);
        return stol(bString) > aDouble
            ? b
            : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double bDouble = boost::any_cast<double>(b);
        string aString = boost::any_cast<string>(a);
        return stol(aString) > bDouble
            ? a
            : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string aStr = boost::any_cast<string>(a);
        string bStr = boost::any_cast<string>(b);
        return stol(bStr) > stol(aStr)
            ? b
            : a;
    }
    else if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    }
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    }
    else {
        return "None";
    }
}