boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return stof(str) > a.convert_to<double>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stof(str2) > stof(str1) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return stof(str) > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a > b.convert_to<double>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        return stof(str) > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : b;
    }
    else {
        return boost::any("None");
    }
}