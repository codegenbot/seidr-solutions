#include <boost/any.hpp>
#include <cassert>
#include <string>

template<typename T>
const T compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return boost::any_cast<T>(a);
        } else {
            return boost::any_cast<T>(b);
        }
    }
    return T();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one<std::string>(std::string("1"), std::string("1")))== "1");
    return 0;
}