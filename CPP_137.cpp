boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)b > (float)a ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        float f = boost::any_cast<float>(a);
        return f > stof(s) ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(s) > f ? a : b;
    }
    if (a.convertible_to(b)) {
        return a > b ? a : b;
    } else {
        return "None";
    }
}