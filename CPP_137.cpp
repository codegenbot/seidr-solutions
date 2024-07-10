#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.get<int>() > b.get<int>() ? a : b.get<int>() == a.get<int>() ? "None" : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return a.get<double>() > b.get<double>() ? a : b.get<double>() == a.get<double>() ? "None" : b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) &&
               (b.type() == typeid(string))) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b.get<string>() == boost::any_cast<string>(a) ? "None" : b;
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : boost::any_cast<string>(a) == boost::any_cast<string>(b) ? "None" : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::lexical_cast<double>(boost::any_cast<string>(a)) > 
               boost::lexical_cast<double>(boost::any_cast<string>(b)) ? a : 
               boost::lexical_cast<double>(boost::any_cast<string>(a)) == 
               boost::lexical_cast<double>(boost::any_cast<string>(b)) ? "None" : b;
    }
}