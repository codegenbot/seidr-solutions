#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = to_string(a.convert_to<int>());
        return max(s, b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fa = a.convert_to<float>();
        int fb = b.convert_to<int>();
        return max(fa, fb);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = to_string(b.convert_to<int>());
        return max(a, s);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fa = stof(any_cast<string>(a));
        string fb = any_cast<string>(b);
        return (fa > stof(fb)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else {
        return boost::any("None");
    }
}