boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return a.cast<int>() < bi ? boost::any(b) : (ai < bi ? boost::any(a) : boost::any("None"));
    }
    else if (a.type() == typeid(double)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return ad < bd ? boost::any(b) : (ad < bd ? boost::any(a) : boost::any("None"));
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return as.compare(bs) < 0 ? boost::any(b) : (as.compare(bs) > 0 ? boost::any(a) : boost::any("None"));
    }
}