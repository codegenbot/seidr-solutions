```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = (string)a.convert_to<string>();
        int i = std::stoi(s);
        return (i > (int)b.convert_to<int>()) ? a : ((i < (int)b.convert_to<int>()) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = (string)a.convert_to<string>();
        float f = std::stof(s);
        return ((f > (float)b.convert_to<int>()) ? a : ((f < (float)b.convert_to<int>()) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = (string)a.convert_to<string>();
        float f = std::stof(s);
        return ((f > (float)b.convert_to<float>()) ? a : ((f < (float)b.convert_to<float>()) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = (string)a.convert_to<string>();
        string s2 = (string)b.convert_to<string>();
        float f1 = std::stof(s1), f2 = std::stof(s2);
        return ((f1 > f2) ? a : ((f1 < f2) ? b : boost::any("None")));
    }
    else {
        throw invalid_argument("Invalid input types");
    }
}