boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b < (int)a ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return stoi(str) > num ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a < (int)b ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str2 > str1 ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float num = boost::any_cast<float>(b);
        string str = boost::any_cast<string>(a);
        return stof(str) > num ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return stoi(str) > num ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(b);
        string str = boost::any_cast<string>(a);
        return stof(str) > num ? b : a;
    }
    else {
        return "None";
    }
}