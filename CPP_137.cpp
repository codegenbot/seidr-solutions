boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        double da = stod(sa);
        double db = stod(sb);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    }
    return a;
}