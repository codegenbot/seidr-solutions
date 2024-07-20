#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("float")) || is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("float"))) {
        return (boost::get<float>(a) > boost::get<float>(b)) ? a : b;
    } else if ((is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("string"))) || (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("string")))) {
        return (boost::get<std::string>(a) > boost::get<std::string>(b)) ? a : b;
    } else if ((is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("int"))) || (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("float")))) {
        return boost::get<int>(a) > boost::get<int>(b) ? a : b;
    }
    return "None";
}