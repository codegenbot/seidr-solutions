#include <boost/any.hpp>
#include <string>
#include <boost/variant.hpp>

using boost::any;
using boost::variant;

any compare_one(any a, any b) {
    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<int>(b)) {
        return get<double>(a) > get<int>(b) ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternative<double>(b)) {
        std::string str = boost::get<std::string>(a);
        double num = get<double>(b);
        return str > std::to_string(num) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<std::string>(b)) {
        std::string str = boost::get<std::string>(b);
        double num = get<double>(a);
        return std::to_string(num) > str ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternative<std::string>(b)) {
        std::string str1 = boost::get<std::string>(a);
        std::string str2 = boost::get<std::string>(b);
        return str1 > str2 ? a : b;
    }
    else if (holds_alternative<int>(a) && holds_alternative<std::string>(b)) {
        int num = get<int>(a);
        std::string str = boost::get<std::string>(b);
        return std::to_string(num) > str ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternative<int>(b)) {
        int num = get<int>(b);
        std::string str = boost::get<std::string>(a);
        return str > std::to_string(num) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<double>(b)) {
        double num1 = get<double>(a);
        double num2 = get<double>(b);
        return num1 > num2 ? a : b;
    }
    else {
        return any();
    }
}