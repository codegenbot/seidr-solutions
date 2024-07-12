#include <boost/any.hpp>
using namespace boost;

// Rest of your function code here...

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return "None";
} else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    std::string x = boost::any_cast<std::string>(a);
    std::string y = boost::any_cast<std::string>(b);
    int xi = stoi(x), yi = stoi(y);
    if (xi > yi)
        return a;
    else if (xi < yi)
        return b;
    else
        return "None";
} else {
    throw invalid_argument("Invalid input");
}