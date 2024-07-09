boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < b ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)a < b ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (double)a < b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        float f = atof(s.c_str());
        return f > a.cast<float>() ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d = atof(s.c_str());
        return d > a.cast<double>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        float f = atof(s.c_str());
        return f > i ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        double d = atof(s.c_str());
        return d > f ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = boost::any_cast<double>(a);
        string s = boost::any_cast<string>(b);
        float f = atof(s.c_str());
        return f > d ? b : a;
    }
    else if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
        return "None";
    }
    else {
        return a > b ? a : b;
    }
}