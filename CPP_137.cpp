#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace boost;

bool is_float(const boost::any &a) {
    try {
        return get<float>(a).type() == typeid(float);
    } catch (...) {
        return false;
    }
}

bool is_string(const boost::any &a) {
    try {
        return get<std::string>(a).type() == typeid(std::string);
    } catch (...) {
        return false;
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        std::string sa = get<std::string>(a);
        std::string sb = get<std::string>(b);
        if (stof(sa) > stof(sb))
            return a;
        else if (stof(sa) == stof(sb))
            return boost::any("None");
        else
            return b;
    } else {
        return boost::any("None");
    }
}

int main() {
    boost::any a = boost::any(3.5);
    boost::any b = boost::any(2.5);

    boost::any result = compare_one(a, b);

    std::cout << "Result: " << get<std::string>(result) << std::endl;

    return 0;
}