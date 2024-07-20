#include <boost/any.hpp>
#include <string>
#include <cassert>

template<typename T>
auto compare_one(const T& a, const T& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return &a;
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return &b;
        }
    }
    return nullptr;
}

int main() {
    assert(*boost::any_cast<const std::string*>(compare_one(std::string("1"), std::string("1"))) == "1");
    return 0;
}