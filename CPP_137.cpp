#include <iostream>
#include <string>
#include <boost/variant.hpp>

boost::variant<int, float, std::string> compare_one(boost::variant<int, float, std::string> a, boost::variant<int, float, std::string> b) {
    if (boost::holds_alternative<int>(a) && boost::holds_alternative<float>(b)) {
        int i = boost::get<int>(a);
        float f = boost::get<float>(b);
        return i > f ? boost::variant<int, float, std::string>(i) : boost::variant<int, float, std::string>(f);
    }
    else if (boost::holds_alternative<float>(a) && boost::holds_alternative<std::string>(b)) {
        float f = boost::get<float>(a);
        std::string str = boost::get<std::string>(b);
        return f > std::stod(str) ? boost::variant<int, float, std::string>(f) : boost::variant<int, float, std::string>(str);
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        std::string str1 = boost::get<std::string>(a);
        std::string str2 = boost::get<std::string>(b);
        return std::stod(str2) > std::stod(str1) ? boost::variant<int, float, std::string>(str2) : (std::stod(str1) == std::stod(str2)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(str1);
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<std::string>(b)) {
        int i = boost::get<int>(a);
        std::string str = boost::get<std::string>(b);
        return std::stod(str) > i ? boost::variant<int, float, std::string>(str) : (i == std::stod(str)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<int>(b)) {
        std::string str = boost::get<std::string>(a);
        int i = boost::get<int>(b);
        return std::stod(str) > i ? boost::variant<int, float, std::string>(str) : (i == std::stod(str)) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else if (boost::holds_alternative<float>(a) && boost::holds_alternative<int>(b)) {
        float f = boost::get<float>(a);
        int i = boost::get<int>(b);
        return f > i ? boost::variant<int, float, std::string>(f) : (i == f) ? boost::variant<int, float, std::string>("None") : boost::variant<int, float, std::string>(i);
    }
    else {
        return a;
    }

    // ... (your original code)
}

int main() {
    boost::variant<int, float, std::string> result = compare_one(boost::variant<int, float, std::string>(10), boost::variant<int, float, std::string>("20.5"));

    if (boost::holds_alternative<int>(result)) {
        int i = boost::get<int>(result);
        std::cout << "The result is: " << i << std::endl;
    }
    else if (boost::holds_alternative<float>(result)) {
        float f = boost::get<float>(result);
        std::cout << "The result is: " << f << std::endl;
    }
    else {
        std::string str = boost::get<std::string>(result);
        std::cout << "The result is: " << str << std::endl;
    }

    return 0;
}