#include <any>
#include <string>

boost::any compare_one(std::any a, std::any b) {
    if (a.has_value() && b.has_value()) {
        if (a.type() == b.type()) {
            if (a.type() == typeid(int)) {
                if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
                    return a;
                } else {
                    return b;
                }
            } else if (a.type() == typeid(float)) {
                if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
                    return a;
                } else {
                    return b;
                }
            } else if (a.type() == typeid(std::string)) {
                if (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) {
                    return a;
                } else {
                    return b;
                }
            }
        }
    }
    return std::any();
}