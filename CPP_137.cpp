#include <boost/any.hpp>
#include <stdexcept>

using namespace boost;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = any_cast<int>(a);
    int y = any_cast<int>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return a; // Return the first integer value
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = any_cast<double>(a);
    double y = any_cast<double>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return a; // Return the first double value
} else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    std::string x = any_cast<std::string>(a);
    std::string y = any_cast<std::string>(b);
    int xi = stoi(x), yi = stoi(y);
    if (xi > yi)
        return a;
    else if (xi < yi)
        return b;
    else
        return a; // Return the first string value
} else {
    throw invalid_argument("Invalid input");
}