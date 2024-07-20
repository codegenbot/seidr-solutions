Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::lexical_cast<string>(b.convert_to<double>());
        if (s.find('.') != string::npos || s.find(',') != string::npos)
            s = s.substr(0, s.find('.'));
        return boost::any(s);
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::lexical_cast<string>(a.convert_to<double>());
        if (s.find('.') != string::npos || s.find(',') != string::npos)
            s = s.substr(0, s.find('.'));
        return boost::any(s);
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() > b.convert_to<string>())
            return a;
        else if (b.convert_to<string>() > a.convert_to<string>())
            return b;
        else
            return boost::any("None");
    }
    if (a.convert_to<double>() > b.convert_to<double>())
        return a;
    else if (b.convert_to<double>() > a.convert_to<double>())
        return b;
    else
        return boost::any("None");
}