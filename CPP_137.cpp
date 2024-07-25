boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream ss(b.convert_to<string>());
        float b_float = 0.0f;
        ss >> b_float;
        return b_float > (float)a ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        istringstream ss(a.convert_to<string>());
        float a_float = 0.0f;
        ss >> a_float;
        return a_float > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        istringstream ss(b.convert_to<string>());
        int b_int = 0;
        ss >> b_int;
        return b_int > (int)a ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        istringstream ss(a.convert_to<string>());
        int a_int = 0;
        ss >> a_int;
        return a_int > (int)b ? a : b;
    }
    return boost::any("None");
}