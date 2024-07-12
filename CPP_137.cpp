```cpp
#include <boost/any.hpp>
#include <string>

std::any a;
std::any b;

if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    std::string x = std::any_cast<std::string>(a);
    std::string y = std::any_cast<std::string>(b);
    return (x < y) ? a : ((y < x) ? b : a);
}