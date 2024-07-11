```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : ((float)a == (int)b) ? boost::any("None") : boost::any((boost::any_cast<int>(b)).convert_to BOOST_REFS(float));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : ((int)a == (float)b) ? boost::any("None") : boost::any((boost::any_cast<float>(a)).convert_to BOOST_REFS(int));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return std::stof((std::string)a) > (float)b ? a : ((std::stof((std::string)a)) == (float)b) ? boost::any("None") : boost::any((boost::any_cast<float>(b)).convert_to BOOST_REFS(std::string));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return (float)a > std::stof((std::string)b) ? a : ((float)a == std::stof((std::string)b)) ? boost::any("None") : boost::any((boost::any_cast<std::string>(a)).convert_to BOOST_REFS(float));
    }
    else {
        return boost::any("None");
    }
}