boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float f = boost::any_cast<float>(a);
        return f > stof(str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a), str2 = boost::any_cast<string>(b);
        return str2.compare(str1) > 0 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return stof(s) > i ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a);
        int i = boost::any_cast<int>(b);
        return f > i ? a : b;
    }
    else {
        return "None";
    }
}