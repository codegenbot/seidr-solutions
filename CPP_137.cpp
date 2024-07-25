#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        
        int comp = strcmp(str1.c_str(), str2.c_str());
        if (comp > 0)
            return a;
        else if (comp < 0)
            return b;
        else
            return boost::any("None");
    }
    else {
        // If both values are equal, compare their types.
        if (a.type() == typeid(int) && b.type() == typeid(int))
            return boost::any("None");
        else
            return any_cast<double>(a) > any_cast<double>(b)
                ? a : b;
    }
}