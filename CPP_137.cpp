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
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::get<int>(a);
        float y = boost::get<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::get<int>(a);
        string y = boost::get<string>(b);
        return (x > stof(y)) ? a : ((x < stof(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::get<float>(a);
        int y = boost::get<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::get<float>(a);
        string y = boost::get<string>(b);
        return (x > stof(y)) ? a : ((x < stof(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::get<string>(a);
        int y = boost::get<int>(b);
        return (stof(x) > y) ? a : ((stof(x) < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::get<string>(a);
        float y = boost::get<float>(b);
        return (stof(x) > y) ? a : ((stof(x) < y) ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}