#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int b_int = boost::lexical_cast<int>(boost::any_cast<string>(b));
        if (a.cast<int>() > b_int) {
            return a;
        } else if (a.cast<int>() < b_int) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = boost::lexical_cast<int>(boost::any_cast<string>(a));
        int b_int = boost::lexical_cast<int>(b);
        if (a_int > b_int) {
            return a;
        } else if (a_int < b_int) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::lexical_cast<float>(b);
        string a_str = boost::any_cast<string>(a);
        if (stof(a_str) > b_float) {
            return a;
        } else if (stof(a_str) < b_float) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double b_double = boost::lexical_cast<double>(b);
        string a_str = boost::any_cast<string>(a);
        if (stod(a_str) > b_double) {
            return a;
        } else if (stod(a_str) < b_double) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int b_int = boost::lexical_cast<int>(b);
        if (a.cast<float>() > b_int) {
            return a;
        } else if (a.cast<float>() < b_int) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        if (a.cast<float>() > b.cast<double>()) {
            return a;
        } else if (a.cast<float>() < b.cast<double>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        int b_int = boost::lexical_cast<int>(b);
        if (a.cast<double>() > b_int) {
            return a;
        } else if (a.cast<double>() < b_int) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(double) && b.type() == typeid(float)) {
        if (a.cast<double>() > b.cast<float>()) {
            return a;
        } else if (a.cast<double>() < b.cast<float>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (boost::any_cast<string>(a) == boost::any_cast<string>(b)) {
        return boost::any("None");
    }
    if (stof(boost::any_cast<string>(a)) > stod(boost::any_cast<string>(b))) {
        return a;
    } else if (stof(boost::any_cast<string>(a)) < stod(boost::any_cast<string>(b))) {
        return b;
    } else {
        return boost::any("None");
    }
}