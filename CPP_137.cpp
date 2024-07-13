```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (!boost::any_cast<int>(&a) && !boost::any_cast<int>(&b)) {
        double da = 0, db = 0;
        if (boost::any_cast<string>(&a))
            std::istringstream(a.to_string()) >> da;
        if (boost::any_cast<string>(&b))
            std::istringstream(b.to_string()) >> db;
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    } else {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        if (ai > bi)
            return a;
        else if (bi > ai)
            return b;
        else
            return boost::any("None");
    }
}