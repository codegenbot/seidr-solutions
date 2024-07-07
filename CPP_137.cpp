#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(a.convert_to<string>()) <
            boost::lexical_cast<double>(b.convert_to<string>())) {
            return b;
        } else if (boost::lexical_cast<double>(a.convert_to<string>()) ==
                   boost::lexical_cast<double>(b.convert_to<string>())) {
            return boost::any("None");
        } else {
            return a;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::lexical_cast<int>(a) < boost::lexical_cast<int>(b)) {
            return b;
        } else if (boost::lexical_cast<int>(a) == boost::lexical_cast<int>(b)) {
            return boost::any("None");
        } else {
            return a;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if (boost::lexical_cast<float>(a) < boost::lexical_cast<float>(b)) {
            return b;
        } else if (boost::lexical_cast<float>(a) == boost::lexical_cast<float>(b)) {
            return boost::any("None");
        } else {
            return a;
        }
    } else {
        throw invalid_argument("Invalid type");
    }
}