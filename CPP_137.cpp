Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(a.convert_to<string>()) > boost::lexical_cast<double>(b.convert_to<string>())) {
            return a;
        }
        else if (boost::lexical_cast<double>(a.convert_to<string>()) < boost::lexical_cast<double>(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::lexical_cast<string>(a);
        if (boost::lexical_cast<double>(str) > boost::lexical_cast<double>(b.convert_to<string>())) {
            return a;
        }
        else if (boost::lexical_cast<double>(str) < boost::lexical_cast<double>(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::lexical_cast<string>(b);
        if (boost::lexical_cast<double>(a.convert_to<string>()) > boost::lexical_cast<double>(str)) {
            return a;
        }
        else if (boost::lexical_cast<double>(a.convert_to<string>()) < boost::lexical_cast<double>(str)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        if (boost::lexical_cast<double>(a.convert_to<string>()) > boost::lexical_cast<double>(b.convert_to<string>())) {
            return a;
        }
        else if (boost::lexical_cast<double>(a.convert_to<string>()) < boost::lexical_cast<double>(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}