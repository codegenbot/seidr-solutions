#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return max(to_string(a.convert_to<int>()), any_cast<string>(b));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(to_string(b.convert_to<int>())));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return max(any_cast<string>(a), to_string(b.convert_to<int>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fa = stof(any_cast<string>(a));
        string fb = any_cast<string>(b);
        return (fa > stod(fb)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else {
        return boost::any("None");
    }
}