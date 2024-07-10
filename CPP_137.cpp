```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (float)a > atof(str.c_str()) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : (str1 < str2 ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return atof(str.c_str()) > x ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return atof(str.c_str()) > y ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    }
    else {
        return boost::any("None");
    }
}