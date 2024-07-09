boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<float>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::get<int>(a) > boost::get<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::any_cast<float>(b);
        string a_str = boost::any_cast<string>(a);
        return stof(a_str) > b_float ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int b_int = boost::get<int>(b);
        string a_str = boost::any_cast<string>(a);
        return stof(a_str) > b_int ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        return stof(a_str) > stod(b_str) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float a_float = boost::any_cast<float>(a);
        int b_int = boost::get<int>(b);
        return a_float > b_int ? a : b;
    }
    else {
        return "None";
    }
}