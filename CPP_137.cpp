#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::get<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((boost::lexical_cast<double>(a.get<string>()) > boost::lexical_cast<double>(b.get<string>()))) {
            return a;
        }
        else if ((boost::lexical_cast<double>(a.get<string>()) < boost::lexical_cast<double>(b.get<string>()))) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        double a_val = boost::lexical_cast<double>(a.get<string>());
        if ((a_val > boost::get<double>(b))) {
            return a;
        }
        else if ((a_val < boost::get<double>(b))) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        double b_val = boost::lexical_cast<double>(b.get<string>());
        if ((boost::get<double>(a) > b_val)) {
            return a;
        }
        else if ((boost::get<double>(a) < b_val)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else {
        if (boost::get<double>(a) > boost::get<double>(b)) {
            return a;
        }
        else if (boost::get<double>(a) < boost::get<double>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
}