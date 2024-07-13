boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        double fa = boost::any_cast<double>(a);
        string fb = boost::any_cast<string>(b);
        if (fa > stod(fb))
            return a;
        else
            return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double fa = stod(a.cast<string>());
        int fb = boost::any_cast<int>(b);
        if (fa > fb)
            return a;
        else
            return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double fa = stod(a.cast<string>());
        double fb = boost::any_cast<double>(b);
        if (fa > fb)
            return a;
        else
            return b;
    }
    if (a.convert_to(double) > b.convert_to(double))
        return a;
    else if (a.convert_to(double) < b.convert_to(double))
        return b;
    else
        return boost::any("None");
}