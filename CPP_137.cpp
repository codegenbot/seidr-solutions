#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<int>(a) > any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return any_cast<int>(a) > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<float>(a) > any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return any_cast<string>(a) > any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b) ? a : b;
    }

    return boost::any("None");
}