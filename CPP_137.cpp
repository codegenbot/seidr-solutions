#include <boost/any.hpp>
#include <string>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any((boost::any_cast<int>(a)) > (boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any((boost::any_cast<int>(a)) > bf ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string astr = boost::any_cast<string>(b);
        return boost::any((boost::any_cast<int>(a)) > stol(astr) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any((af) > (boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any((af) > (bf) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string astr = boost::any_cast<string>(b);
        return boost::any((af) > stof(astr) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string astr = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any(stoi(astr) > (boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string astr = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any(stof(astr) > (bf) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string astr = boost::any_cast<string>(a);
        string bstr = boost::any_cast<string>(b);
        return boost::any(astr > bstr ? a : b;
    }

    return boost::any("None");
}