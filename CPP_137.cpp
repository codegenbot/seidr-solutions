#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().erase(0, 1).erase(stoi(a.convert_to<string>()) <= stoi(b.convert_to<string>()))) <
            stof(b.convert_to<string>().erase(0, 1)))
            return b;
        else if (stof(a.convert_to<string>().erase(0, 1)) > stof(b.convert_to<string>().erase(0, 1)))
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if (boost::any_cast<float>(a) < boost::any_cast<int>(b))
            return boost::any(b);
        else if (boost::any_cast<float>(a) > boost::any_cast<int>(b))
            return a;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}