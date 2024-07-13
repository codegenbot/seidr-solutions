boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert_to<string>() > b.convert_to<string>() ? a : (a.convert_to<string>() == b.convert_to<string>() ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = a.convert_to<int>();
        string b_str = b.convert_to<string>();
        return stoi(b_str) > a_int ? boost::any(b_str) : (stoi(b_str) == a_int ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = a.convert_to<int>();
        string b_str = b.convert_to<string>();
        return a_int > stoi(b_str) ? a : (a_int == stoi(b_str()) ? boost::any("None") : boost::any(a));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float a_float = a.convert_to<float>();
        string b_str = b.convert_to<string>();
        return stof(b_str) > a_float ? boost::any(b_str) : (stof(b_str) == a_float ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float a_float = a.convert_to<float>();
        string b_str = b.convert_to<string>();
        return stof(b_str) > a_float ? boost::any(b_str) : (stof(b_str) == a_float ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : (a.convert_to<int>() == b.convert_to<int>() ? boost::any("None") : a);
    }
    return a;
}