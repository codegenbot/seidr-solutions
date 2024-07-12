#include <iostream>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_pointer(&a)) {
        int *ia = &dynamic_cast<int&>(a);
        int *ib = &dynamic_cast<int&>(b);
        if (*ia > *ib)
            return a;
        else if (*ia < *ib)
            return b;
        else
            return any("None");
    } else if (is_pointer(&b)) {
        int *ia = &dynamic_cast<int&>(a);
        int *ib = &dynamic_cast<int&>(b);
        if (*ia > *ib)
            return a;
        else if (*ia < *ib)
            return b;
        else
            return any("None");
    } else if (any_cast<double>(a) > any_cast<double>(b))
        return a;
    else if (any_cast<double>(a) < any_cast<double>(b))
        return b;
    else
        return any("None");
}