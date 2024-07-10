#include <iostream>
#include <boost/any.hpp>
#include <algorithm>

template <typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string num1 = boost::any_cast<std::string>(a);
        std::string num2 = boost::any_cast<std::string>(b);
        auto replaceComma = [](std::string& s) { std::replace(s.begin(), s.end(), ',', '.'); };
        if (num1.find(",") != std::string::npos) replaceComma(num1);
        if (num2.find(",") != std::string::npos) replaceComma(num2);
        float fnum1 = std::stof(num1);
        float fnum2 = std::stof(num2);
        return fnum1 > fnum2 ? a : (fnum1 < fnum2 ? b : "None");
    } else {
        return "None";
    }
}

int main() {
    assert(boost::any_cast<std::string>(compare_one<std::string>("1", "2")) == "None");
    return 0;
}