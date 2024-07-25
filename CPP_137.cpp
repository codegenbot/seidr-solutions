```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < (float)b ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > (int)b ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>() > b.convert<string>() ? &a : &b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return x > boost::lexical_cast<int>(y) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return boost::lexical_cast<int>(x) > y ? a : b;
    }
    return "None";
}