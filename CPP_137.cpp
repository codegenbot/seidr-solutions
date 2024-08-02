#include <any>
#include <string>
#include <typeinfo>
#include <boost/any.hpp>
#include <cassert>

template <typename T>
boost::any compare_one(T a, T b) {
    if (a == b) {
        return "None";
    } else {
        return (a > b) ? boost::any(a) : boost::any(b);
    }
}

boost::any compare(std::any a, std::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return compare_one(std::any_cast<int>(a), std::any_cast<int>(b));
        } else if (a.type() == typeid(float)) {
            return compare_one(std::any_cast<float>(a), std::any_cast<float>(b));
        } else if (a.type() == typeid(std::string)) {
            return compare_one(std::any_cast<std::string>(a), std::any_cast<std::string>(b));
        }
    }
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", "1")) == "None");
    return 0;
}