#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        if (a.type() == typeid(float) && boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        if (a.type() == typeid(std::string) && boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
            return a;
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");
    
    return 0;
}