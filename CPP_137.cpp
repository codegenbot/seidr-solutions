#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/variant.hpp>

using namespace boost;

variant<int, float, std::string> compare_one(any a, any b) {
    if (get<int>(a) > get<float>(b)) {
        return variant<int, float, std::string>(get<int>(a));
    }
    else if (get<float>(a) > get<std::string>(b)) {
        float f = get<float>(a);
        std::string str = get<std::string>(b);
        return f > std::stod(str) ? variant<int, float, std::string>(f) : variant<int, float, std::string>(str);
    }
    else if (get<std::string>(a) > get<std::string>(b)) {
        std::string str1 = get<std::string>(a);
        std::string str2 = get<std::string>(b);
        return std::stod(str2) > std::stod(str1) ? variant<int, float, std::string>(str2) : (std::stod(str1) == std::stod(str2)) ? variant<int, float, std::string>("None") : variant<int, float, std::string>(str1);
    }
    else if (get<int>(a) > get<std::string>(b)) {
        int i = get<int>(a);
        std::string str = get<std::string>(b);
        return std::stod(str) > i ? variant<int, float, std::string>(str) : (i == std::stod(str)) ? variant<int, float, std::string>("None") : variant<int, float, std::string>(i);
    }
    else if (get<std::string>(a) > get<int>(b)) {
        std::string str = get<std::string>(a);
        int i = get<int>(b);
        return std::stod(str) > i ? variant<int, float, std::string>(str) : (i == std::stod(str)) ? variant<int, float, std::string>("None") : variant<int, float, std::string>(i);
    }
    else if (get<float>(a) > get<int>(b)) {
        float f = get<float>(a);
        int i = get<int>(b);
        return f > i ? variant<int, float, std::string>(f) : (i == f) ? variant<int, float, std::string>("None") : variant<int, float, std::string>(i);
    }
    else {
        return a;
    }
}

int main() {
    any a = 10;
    any b = "20.5";
    variant<int, float, std::string> result = compare_one(a, b);

    if (holds_alternative<int, float, std::string>(result) == 0) {
        std::cout << "The result is: " << get<int>(result) << std::endl;
    }
    else if (holds_alternative<int, float, std::string>(result) == 1) {
        std::cout << "The result is: " << get<float>(result) << std::endl;
    }
    else {
        std::cout << "The result is: " << get<std::string>(result) << std::endl;
    }

    return 0;
}