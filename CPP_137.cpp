#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any((boost::any_cast<int>(a) > boost::any_cast<float>(b))));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stoi(y) > x) ? b : ((x > stoi(y)) ? a : boost::any((boost::any_cast<int>(a) > std::stof(b))));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (std::stof(y) > x) ? b : ((x > std::stof(y)) ? a : boost::any((boost::any_cast<float>(a) > std::stof(b))));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (std::stoi(x) > y) ? a : ((y > std::stoi(x)) ? b : boost::any((std::stof(a) > boost::any_cast<int>(b))));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (std::stof(x) > y) ? a : ((y > std::stof(x)) ? b : boost::any((std::stof(a) > boost::any_cast<float>(b))));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (std::stof(x) > std::stof(y)) ? a : ((std::stof(y) > std::stof(x)) ? b : boost::any((boost::any_cast<float>(a) > boost::any_cast<float>(b))));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any((boost::any_cast<float>(a) > boost::any_cast<float>(b))));
    } else {
        return boost::any("Invalid input");
    }
}