boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < (float)b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : (a.convert<string>() == b.convert<string>() ? boost::any("None") : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        return a_int < std::stoi(b_str) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        return std::stoi(a_str) < b_int ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_float = boost::any_cast<float>(a);
        string b_str = boost::any_cast<string>(b);
        return a_float > std::stof(b_str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float a_float = boost::any_cast<float>(a);
        string b_str = boost::any_cast<string>(b);
        return std::stof(a_str) > b_float ? a : b;
    }
    else {
        return boost::any("None");
    }
}