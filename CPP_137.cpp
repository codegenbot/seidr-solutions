```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greater<float>()(boost::get<float>(b), boost::get<int>(a)) ? &b : &a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return greater<int>()(boost::get<int>(a), boost::get<float>(b)) ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert_to<string>() > b.convert_to<string>() ? a : b;
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(int)) && 
             (b.type() == typeid(float) || b.type() == typeid(int))) {
        auto fa = boost::get<double>(a);
        auto fb = boost::get<double>(b);
        return fa > fb ? &a : (fa < fb ? &b : boost::any("None")));
    }
    else {
        return boost::any("None");
    }
}