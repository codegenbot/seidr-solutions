#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(std::max(boost::any_cast<int>(a), boost::any_cast<int>(b)));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any(std::max(boost::any_cast<float>(a), boost::any_cast<float>(b)));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any(std::max(std::stof(boost::any_cast<std::string>(a)), std::stof(boost::any_cast<std::string>(b))));
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<float>(compare_one(1.5f, 2.3f)) == 2.3f);
    return 0;
}