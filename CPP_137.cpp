#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max(a, b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convertible_to<string>(), b.convertible_to<string>())).convertible_to<boost::any>();
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a.convertible_to<int>() > (int)b.convertible_to<int>())
            return a;
        else if ((int)a.convertible_to<int>() < (int)b.convertible_to<int>())
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if ((float)a.convertible_to<float>() > (float)b.convertible_to<float>())
            return a;
        else if ((float)a.convertible_to<float>() < (float)b.convertible_to<float>())
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}