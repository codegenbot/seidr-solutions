#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a.convert_to<int>() > b.convert_to<float()) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) >= boost::lexical_cast<string>(a.convert_to<float>()) ? 
               b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return *boost::any_cast<string>(b) >= *boost::any_cast<string>(a) ? b : "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::lexical_cast<int>(a.convert_to<string>());
        return boost::lexical_cast<string>(b.convert_to<int>()) >= std::to_string(a_int) ? 
               b : "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : ((a.convert_to<int>() == b.convert_to<int>()) ? boost::any("None") : a);
    }
    return "None";
}