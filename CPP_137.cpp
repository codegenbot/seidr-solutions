boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a < b ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        float f = boost::any_cast<float>(a);
        return f > std::stof(s) ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int i = boost::any_cast<int>(a);
        return i > std::stoi(s) ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return f > std::stof(s) ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return sa > sb ? b : a;
    }
    return "None";
}