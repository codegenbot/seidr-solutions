#include <boost/variant.hpp>
#include <string>
#include <iostream>

using namespace boost;

namespace {

boost::variant<int, double, std::string> compare_one(boost::variant<int, double, std::string> a, 
                                                      boost::variant<int, double, std::string> b) {
    if (a.index() == 0 && b.index() == 1) {
        return b;
    }
    else if (a.index() == 1 && b.index() == 0) {
        return b;
    }
    else if (a.index() == 2 && b.index() == 2) {
        std::string strA = boost::get<std::string>(a);
        std::string strB = boost::get<std::string>(b);

        if (strA > strB) {
            return a;
        }
        else if (strA < strB) {
            return b;
        }
        else {
            return 0; // or return some special value to represent "None"
        }
    }
    else if ((a.index() == 1 && b.index() == 2) || 
             (a.index() == 2 && b.index() == 1)) {
        if (boost::get<double>(a) > boost::get<double>(b)) {
            return a;
        }
        else if (boost::get<double>(a) < boost::get<double>(b)) {
            return b;
        }
        else {
            return 0; // or return some special value to represent "None"
        }
    }

    return 0; // or return some special value to represent "None"
}

}