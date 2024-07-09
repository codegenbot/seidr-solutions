boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(boost::any_cast<float>(b));
        return (x > std::stof(y)) ? a : ((std::stof(y) > x) ? b : a);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (x > std::stoi(y)) ? a : ((std::stoi(y) > x) ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (x > std::stof(y)) ? a : ((std::stof(y) > x) ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (x > std::to_string(y)) ? a : ((std::to_string(y) > x) ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (x > std::to_string(y)) ? a : ((std::to_string(y) > x) ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (x > y) ? a : ((y > x) ? b : a);
    } else {
        return boost::any("None");
    }
}