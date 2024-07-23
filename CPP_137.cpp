boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = any_cast<int>(a);
        string y = any_cast<string>(b);
        return x > boost::lexical_cast<int>(y) ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = any_cast<int>(b);
        string y = any_cast<string>(a);
        return boost::lexical_cast<int>(y) > x ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = any_cast<float>(a);
        string y = any_cast<string>(b);
        return x > boost::lexical_cast<float>(y) ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float x = any_cast<float>(b);
        string y = any_cast<string>(a);
        return boost::lexical_cast<float>(y) > x ? a : (b.convert_to<boost::any>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return x > y ? a : ((boost::any)b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = any_cast<float>(a);
        float y = any_cast<float>(b);
        return x > y ? a : ((boost::any)b);
    }
    return boost::any("None");
}