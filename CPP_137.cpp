#include <boost/any.hpp>
using namespace std;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return boost::any(a);