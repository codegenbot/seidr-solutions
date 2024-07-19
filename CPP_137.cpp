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
    throw std::invalid_argument("Types do not match");
}

int main() {
    boost::any a = 10;
    boost::any b = 20;
    try {
        int result = compare_one<int>(a, b);
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}