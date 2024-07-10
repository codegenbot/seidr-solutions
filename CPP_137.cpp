#include <boost/variant.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    using namespace boost;

    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<int>(b)) {
        return get<double>(a) > get<int>(b) ? a : b;
    }
    else if (holds_alternative<std::string>(a) && holds_alternation