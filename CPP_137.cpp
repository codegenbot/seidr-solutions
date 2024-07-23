boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return str_a > str_b ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str_a = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        double b_double = boost::any_cast<double>(b);
        return str_a > std::to_string(b_int) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        int a_int = boost::any_cast<int>(a);
        double a_double = boost::any_cast<double>(a);
        string str_b = boost::any_cast<string>(b);
        return std::to_string(a_int) > str_b || std::to_string(a_double) > str_b ? a : b;
    }
    else {
        return "None";
    }
}