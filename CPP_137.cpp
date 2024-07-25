#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convert_to<float>(), stof(b.convert_to<string>().erase(0, 1).erase(stof(b.convert_to<string>().erase(0, 1)).size())));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(a.convert_to<string>().erase(0, 1).erase(stof(a.convert_to<string>().erase(0, 1)).size())) > stof(b.convert_to<string>().erase(0, 1).erase(stof(b.convert_to<string>().erase(0, 1)).size()))) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convert_to<int>() > (int)b.convert_to<int>() ? a : b;
    }
    else if ((int)a.convert_to<int>() == (int)b.convert_to<int>()) {
        return boost::any("None");
    }
    else {
        return max(a, b);
    }
}