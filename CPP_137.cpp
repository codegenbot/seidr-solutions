#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::lexical_cast<int>(b.convert_to<string>()) > a.convert_to<int>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::lexical_cast<float>(b.convert_to<string>()) > a.convert_to<float>())
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::lexical_cast<int>(a.convert_to<string>()) > b.convert_to<int>())
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::lexical_cast<float>(a.convert_to<string>()) > b.convert_to<float>())
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<int>(a.convert_to<string>()) > boost::lexical_cast<int>(b.convert_to<string>()))
            return a;
        else if (boost::lexical_cast<int>(a.convert_to<string>()) < boost::lexical_cast<int>(b.convert_to<string>()))
            return b;
        else
            return boost::any("None");
    }
    else {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else
            return boost::any("None");
    }
}