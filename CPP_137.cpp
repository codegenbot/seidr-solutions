#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float val1 = boost::lexical_cast<float>(boost::any_cast<std::string>(a));
        float val2 = boost::lexical_cast<float>(boost::any_cast<std::string>(b));
        if (val1 > val2) {
            return a;
        } else if (val1 < val2) {
            return b;
        }
    }
    return boost::any{};
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");
    return 0;
}