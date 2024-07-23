boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::get<int>(a);
        float y = boost::get<float>(b);
        return (x > y) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int x = boost::get<int>(a);
        double y = boost::get<double>(b);
        return (x > y) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float x = boost::get<float>(a);
        double y = boost::get<double>(b);
        return (x > y) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stof(y) > stof(x)) ? b : ((stof(x) >= stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::get<int>(b);
        return (stof(x) > y) ? a : ((y >= stof(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::get<float>(b);
        return (stof(x) > y) ? a : ((y >= stof(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::get<int>(a);
        string y = boost::any_cast<string>(b);
        return (x > stof(y)) ? a : ((stof(y) >= x) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::get<float>(a);
        string y = boost::any_cast<string>(b);
        return (x > stof(y)) ? a : ((stof(y) >= x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::get<int>(a);
        int y = boost::get<int>(b);
        return (x > y) ? a : ((y >= x) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::get<float>(a);
        float y = boost::get<float>(b);
        return (x > y) ? a : ((y >= x) ? b : boost::any("None"));
    }
    return boost::any("None");
}