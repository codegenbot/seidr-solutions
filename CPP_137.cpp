boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return stof(str) > boost::any_cast<float>(a)
            ? b
            : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stof(str2) > stof(str1)
            ? b
            : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return stof(str) > num
            ? b
            : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float flt = boost::any_cast<float>(a);
        int num = boost::any_cast<int>(b);
        return flt > num
            ? a
            : b;
    }
    else {
        return boost::any("None");
    }
}