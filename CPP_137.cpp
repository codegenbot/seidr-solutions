#include <boost/any.hpp>
#include <sstream>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a
            : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a
            : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : boost::any(std::to_string(boost::any_cast<int>(a)));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : boost::any(std::to_string(boost::any_cast<float>(b)));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::istringstream a_stream(a.convert_to<std::string>());
        int a_int;
        a_stream >> a_int;
        std::istringstream b_stream(b.convert_to<std::string>());
        int b_int;
        b_stream >> b_int;
        return a_int > b_int
            ? a
            : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::istringstream stream(a.convert_to<std::string>());
        float f;
        stream >> f;
        return f > boost::any_cast<float>(b)
            ? a
            : boost::any(std::to_string(boost::any_cast<float>(b)));
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::istringstream stream(b.convert_to<std::string>());
        float f;
        stream >> f;
        return boost::any_cast<float>(a) > f
            ? a
            : boost::any(std::to_string(f));
    }
    return boost::any("None");
}