#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (a.type() == typeid(float) && boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (a.type() == typeid(std::string) && stof(boost::any_cast<std::string>(a)) > stof(boost::any_cast<std::string>(b))) {
            return a;
        } else {
            return b;
        }
    }
    return boost::any();
}

int main() {
    boost::any a = 5;
    boost::any b = 10;
    assert(compare_one(a, b).type() == typeid(int));
}