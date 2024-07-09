boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return str_b > str_a ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str_a = boost::any_cast<string>(a);
        float f_b = boost::any_cast<float>(b);
        if (str_a == "0" || str_a == ".") {
            return f_b > 0.0f ? b : a;
        } else {
            return f_b > std::stof(str_a) ? b : a;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f_a = boost::any_cast<float>(a);
        string str_b = boost::any_cast<string>(b);
        return f_a > std::stof(str_b) ? a : b;
    }
    return "None";
}