#include <algorithm>
#include <string>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return boost::max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return boost::max(num1, num2);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return boost::max(str1, str2, [](const std::string& s1, const std::string& s2) { return s1 < s2; });
    }
    return boost::any();
}