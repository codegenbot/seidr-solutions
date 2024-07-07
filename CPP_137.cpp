boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b) > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float f = boost::any_cast<float>(a);
        return f > stof(str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stof(str2) > stof(str1) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return stof(str) > i ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stof(str) > i ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int i = boost::any_cast<int>(b);
        return f > i ? b : a;
    }
    else if (a.type() == typeid(string) || b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 == str2)
            return "None";
        else
            return str1 > str2 ? a : b;
    }
    else {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        return f1 > f2 ? a : b;
    }
}