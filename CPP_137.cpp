#include <algorithm>
#include <string>
#include <boost/any.hpp>
#include <cassert>

using boost::any;
using boost::any_cast;
using std::max;
using std::string;

template <typename T>
T compare(const T& a, const T& b) {
    return max(a, b);
}

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = any_cast<int>(a);
        int num2 = any_cast<int>(b);
        return compare(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = any_cast<float>(a);
        float num2 = any_cast<float>(b);
        return compare(num1, num2);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return compare(str1, str2);
    }
    return any();
}