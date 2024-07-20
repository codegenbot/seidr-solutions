boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        if ((int)a.convert_to<double>() > b.convert_to<double>())
            return a;
        else if ((int)a.convert_to<double>() < b.convert_to<double>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a > (int)b)
            return a;
        else if ((int)a < (int)b)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if ((double)a.convert_to<double>() > (double)b.convert_to<double>())
            return a;
        else if ((double)a.convert_to<double>() < (double)b.convert_to<double>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = any_cast<string>(a);
        double sb = any_cast<double>(b);
        if (stod(sa) > sb)
            return a;
        else if (stod(sa) < sb)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string sa = any_cast<string>(a);
        int sb = any_cast<int>(b);
        if (stod(sa) > sb)
            return a;
        else if (stod(sa) < sb)
            return b;
        else
            return boost::any("None");
    }
    else {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return boost::any("None");
    }
}