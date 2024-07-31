#include <iostream>
#include <boost/any.hpp> // Include the <boost/any.hpp> header

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
        return boost::any_cast<T>(a);
    } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
        return boost::any_cast<T>(b);
    }
    return T();
}

int main() {
    assert(compare_one<int>(std::string("1"), std::to_string(1)).empty());

    return 0;
}