#include <boost/any.hpp>
#include <string>

boost::any compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return (num1 > num2) ? boost::any(num1) : ((num1 < num2) ? boost::any(num2) : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return (num1 > num2) ? boost::any(num1) : ((num1 < num2) ? boost::any(num2) : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return (str1 > str2) ? boost::any(str1) : ((str1 < str2) ? boost::any(str2) : boost::any("None"));
    } else {
        return boost::any("None");
    }
}