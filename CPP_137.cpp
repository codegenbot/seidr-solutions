#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a < boost::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_a = boost::any_cast<int>(a);
        string str_b = boost::any_cast<string>(b);
        return int_a >= stoi(str_b) ? "None" : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str_a = boost::any_cast<string>(a);
        int int_b = boost::any_cast<int>(b);
        return stoi(str_a) >= int_b ? "None" : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float float_a = boost::any_cast<float>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_b == ".") return a;
        else if (str_b == ",") return b;
        else {
            float float_b = stof(str_b);
            return float_a > float_b ? a : b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str_a = boost::any_cast<string>(a);
        float float_b = boost::any_cast<float>(b);
        if (str_a == ".") return "None";
        else if (str_a == ",") return a;
        else {
            float float_a = stof(str_a);
            return float_a > float_b ? a : b;
        }
    }
    return "None";
}