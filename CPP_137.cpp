#include <cassert>
#include <boost/any.hpp>
#include <algorithm>
#include <string>

using namespace std;
using namespace boost;

any compare_one(any a, any b);

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (any_cast<int>(a) > any_cast<int>(b)) {
            return a;
        } else if (any_cast<int>(a) < any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (any_cast<float>(a) > any_cast<float>(b)) {
            return a;
        } else if (any_cast<float>(a) < any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }

    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        replace(strA.begin(), strA.end(), ',', '.');
        replace(strB.begin(), strB.end(), ',', '.');
        if (stof(strA) > stof(strB)) {
            return a;
        } else if (stof(strA) < stof(strB)) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}