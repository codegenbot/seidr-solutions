#include <boost/any.hpp>
#include <string>

if (a.type() == b.type()) {
    if (a.type() == typeid(int) && boost::any_cast<int>(a) != boost::any_cast<int>(b)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && boost::any_cast<float>(a) != boost::any_cast<float>(b)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && boost::any_cast<string>(a) != boost::any_cast<string>(b)) {
        return (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) ? a : b;
    }
}
return "None";