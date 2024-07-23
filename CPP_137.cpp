#include <boost/any.hpp>
#include <string>

template <typename T>
T compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(T) && b.type() == typeid(T))
        return (boost::any_cast<T>(a) > boost::any_cast<T>(b)) ? boost::any_cast<T>(a) : boost::any_cast<T>(b);
    return T();
}

int main() {
    boost::any a, b;

    if (a == b)
        return "None";
    if (a.type() == typeid(int) && b.type() == typeid(float))
        return compare_one<int>(a, b);
    if (a.type() == typeid(float) && b.type() == typeid(int))
        return compare_one<float>(a, b);
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string))
        return compare_one<std::string>(a, b);
    return "None";
}