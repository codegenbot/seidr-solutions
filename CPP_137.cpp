```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
             (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any(a.convert_to<double>) > boost::any(b.convert_to<double>) ? a : b;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        return boost::lexical_cast<string>(boost::any(a).convert_to<string)) >
               boost::lexical_cast<string>(boost::any(b).convert_to<string>()) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double) ||
              a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                             b.type() == typeid(double) || b.type() == typeid(string))) {
        return boost::any(a).convert_to<string>().compare(boost::any(b).convert_to<string>()) > 0 ? a : b;
    }
    else if ((a.type() == typeid(int)) && (b.type() == typeid(float) ||
                                            b.type() == typeid(double) || b.type() == typeid(string))) {
        return boost::any(b).convert_to<string>().compare("None") != 0 ? a : b;
    }
    else {
        return "None";
    }
}