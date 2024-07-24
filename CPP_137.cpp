boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string s1 = boost::any_cast<std::string>(a);
        std::string s2 = boost::any_cast<std::string>(b);
        return s1 > s2 ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        return stof(y) > x ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string x = boost::any_cast<std::string>(a);
        float y = boost::any_cast<float>(b);
        return stof(x) > y ? a : b;
    }
    
    if (a == b)
        return boost::any("None");
    else
        return a;
}