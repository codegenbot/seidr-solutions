boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b.cast<boost::any>()));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        float f2 = boost::any_cast<float>(b);
        return str1.compare(to_string(f2)) > 0 ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return s1.compare(s2) > 0 ? a : ((s1.compare(s2) < 0) ? b : boost::any("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return stoi(s) > i ? a : ((stoi(s) < i) ? b : boost::any("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = boost::any_cast<int>(a);
        int i2 = boost::any_cast<int>(b);
        return i1 > i2 ? a : ((i1 < i2) ? b : boost::any("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int i = boost::any_cast<int>(b);
        return f > i ? a : ((f < i) ? b : boost::any("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return f1 > f2 ? a : ((f1 < f2) ? b : boost::any("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stoi(s) > i ? a : ((stoi(s) < i) ? b : boost::any("None")));
    }
    return boost::any("None");
}