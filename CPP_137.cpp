#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <cassert>
#include <locale>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        std::transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c){ return std::tolower(c); });
        std::transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c){ return std::tolower(c); });
        auto max_str = std::max_element({str1, str2});
        return *max_str;
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(boost::any(std::string("1")), boost::any(std::string("None")))) == "None");
    return 0;
}