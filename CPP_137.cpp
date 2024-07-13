```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a <=> (float)b > 0 ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        float num = stof(str);
        return a < num ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a), str2 = any_cast<string>(b);
        return str1 > str2 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a < (int)b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a < b ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = any_cast<int>(b);
        string str = any_cast<string>(a);
        float fl = stof(str);
        return fl > num ? b : a;
    }
    else {
        return boost::any("None");
    }
}