boost::variant<int, float, string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return (f > stod(str)) ? boost::variant<int, float, string>(f) : boost::variant<int, float, string>(str);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        return (stod(str2) > stod(str1)) ? boost::variant<int, float, string>(str2) : (stod(str1) == stod(str2)) ? boost::variant<int, float, string>("None") : boost::variant<int, float, string>(str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        return (stod(str) > i) ? boost::variant<int, float, string>(str) : (i == stod(str)) ? boost::variant<int, float, string>("None") : boost::variant<int, float, string>(i);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return (stod(str) > i) ? boost::variant<int, float, string>(str) : (i == stod(str)) ? boost::variant<int, float, string>("None") : boost::variant<int, float, string>(i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? boost::variant<int, float, string>(f) : (i == f) ? boost::variant<int, float, string>("None") : boost::variant<int, float, string>(i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? boost::variant<int, float, string>(i2) : (i1 == i2) ? boost::variant<int, float, string>("None") : boost::variant<int, float, string>(i1);
    }
    else {
        return "None";
    }
}