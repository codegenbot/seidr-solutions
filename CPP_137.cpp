#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/any_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);

        int numA = stol(strA);
        int numB = stol(strB);

        return (numA > numB ? a : b).type() == typeid(float) ? boost::any(get<1>(boost::tie(numA, numB))) : (numA > numB ? b : a);
    } else if (a.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        int numA = stol(strA);

        if (b.type() == typeid(int)) {
            return (any_cast<int>(b) > numA ? b : a);
        }
    }

    return boost::any("None");
}