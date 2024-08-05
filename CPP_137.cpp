#include <boost/any.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <cassert>
#include <string>
#include <stdexcept>

boost::any compare_one(const boost::any& a, const boost::any& b);

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");

    return 0;
}

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float num1, num2;
        if (boost::any_cast<std::string>(a).find(',') != std::string::npos) {
            boost::replace_all(boost::any_cast<std::string>(a), ",", ".");
        }
        if (boost::any_cast<std::string>(b).find(',') != std::string::npos) {
            boost::replace_all(boost::any_cast<std::string>(b), ",", ".");
        }
        num1 = stof(boost::any_cast<std::string>(a));
        num2 = stof(boost::any_cast<std::string>(b));
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}