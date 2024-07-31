#include <boost/any.hpp>
#include <string>

template<typename T>
T compare_one(const boost::any& a, const boost::any& b);

int main() {
    // existing code here

    return "None";
}

template<typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) return boost::any_cast<T>(a);
    if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) return boost::any_cast<T>(b);
    return boost::any_cast<T>(a);
}