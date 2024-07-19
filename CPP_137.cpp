#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (boost::any_cast<T>(a) > boost::any_cast<T>(b)) {
            return boost::any_cast<T>(a);
        } else if (boost::any_cast<T>(a) < boost::any_cast<T>(b)) {
            return boost::any_cast<T>(b);
        }
    }
    throw std::invalid_argument("Invalid types");
}

int main() {
    // Example usage
    boost::any a = 10;
    boost::any b = 20;
    int result = compare_one<int>(a, b);
    return 0;
}