boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any(bf > ai ? b : a);
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return boost::any(stof(bs) > ai ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return boost::any(stof(bs) > af ? b : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any(stof(as) > bi ? a : b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any(stof(as) > bf ? a : b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return boost::any(stof(as) > stof(bs) ? a : (stof(as) < stof(bs) ? b : a));
    }
    
    // If none of the above conditions are met, return the first value
    return a;
}