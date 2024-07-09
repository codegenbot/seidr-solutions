boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(double)) ||
             (a.type() == typeid(float) && b.type() == typeid(float))) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    }
    else {
        std::string s1 = boost::any_cast<std::string>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        if (s2.compare(s1) > 0)
            return b;
        else if (s2.compare(s1) < 0)
            return a;
        else
            return boost::any("None");
    }
}