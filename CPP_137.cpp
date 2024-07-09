boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<float>(a) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int i = boost::any_cast<int>(a);
        return stof(s) > i ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stof(s) > i ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        float f = boost::any_cast<float>(a);
        return f > stof(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(s) > f ? a : b;
    }
    return boost::any("None");
}