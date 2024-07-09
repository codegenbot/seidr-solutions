```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(boost::any_cast<float>(b));
        return (x > stod(y)) ? a : ((stod(y) > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stof(y) > x) ? b : ((x > stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (stof(y) > x) ? b : ((x > stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(x) > stod(y)) ? a : ((stod(y) > stod(x)) ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}