#include <boost/variant.hpp>

boost::variant<int, float, std::string> compare_one(boost::variant<boost::variant<int, float, std::string>, boost::variant<int, float, std::string>> a, boost::variant<int, float, std::string> b) {
    if (a.which() == 0 && b.which() == 1) { // int and float
        return boost::get<float>(b) > boost::get<int>(a) ? b : a;
    } else if (a.which() == 1 && b.which() == 0) { // float and int
        return boost::get<float>(a) > boost::get<int>(b) ? a : b;
    } else if (a.which() == 2 && b.which() == 2) { // string and string
        std::string strA = boost::get<std::string>(a);
        std::string strB = boost::get<std::string>(b);
        return stof(strB) > stof(strA) ? b : a;
    } else if (a.which() == 2 && b.which() == 1) { // string and float
        return boost::get<float>(b) > stof(boost::get<std::string>(a)) ? b : a;
    } else if (a.which() == 1 && b.which() == 2) { // float and string
        return stof(boost::get<std::string>(b)) > boost::get<float>(a) ? b : a;
    } else {
        return "None";
    }
}