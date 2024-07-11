#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return (fa > fb ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (stof(sa) > stof(sb) ? a : b);
    }
    else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
             (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    else {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return (fa > fb ? a : b);
    }
}