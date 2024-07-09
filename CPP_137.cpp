boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::get<int>(a);
        int y = boost::get<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::get<float>(a);
        float y = boost::get<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::get<string>(a);
        string y = boost::get<string>(b);
        return (stof(x) > stof(y)) ? a : ((stof(x) < stof(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string x = boost::get<string>(a);
        return (stof(x) > boost::get<float>(b)) ? a : ((stof(x) < boost::get<float>(b)) ? b : boost::any("None"));
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string y = boost::get<string>(b);
        return (stof(y) > boost::get<float>(a)) ? b : ((stof(y) < boost::get<float>(a)) ? a : boost::any("None"));
    } else {
        return boost::any("None");
    }
}