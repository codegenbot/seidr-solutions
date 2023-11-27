#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/any.hpp>
#include <cassert>

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
        boost::algorithm::to_lower(str1);
        boost::algorithm::to_lower(str2);
        return std::max(str1, str2, [](const std::string& s1, const std::string& s2) { return s1 < s2; });
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(boost::any(std::string("1")), boost::any(std::string("None")))) == "None");
    return 0;
}