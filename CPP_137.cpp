boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a.convert_to<float>() > b.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return a.convert_to<float>() > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return atof(str2.c_str()) > atof(str1.c_str()) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return a.convert_to<int>() > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() > b.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        return atof(str.c_str()) > b.convert_to<int>() ? b : a;
    }
    else {
        return "None";
    }
}