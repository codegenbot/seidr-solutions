#include <boost/any.hpp>
#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("int"))) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("float"))) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("std::string")) && is_any_of<b>(std::string("std::string"))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("float"))) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("int"))) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("std::string"))) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > convert_to_int(y)) ? a : ((x < convert_to_int(y)) ? b : boost::any(std::string("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("std::string"))) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > convert_to_float(y)) ? a : ((x < convert_to_float(y)) ? b : boost::any(std::string("None")));
    } else {
        return boost::any(std::string("None"));
    }
}

int convert_to_int(const std::string& s) {
    int x;
    if (std::istringstream(s) >> x)
        return x;
    else
        throw std::runtime_error("Invalid integer string");
}

float convert_to_float(const std::string& s) {
    float x;
    if (std::istringstream(s) >> x)
        return x;
    else
        throw std::runtime_error("Invalid float string");
}