```
#include <boost/any.hpp>
#include <boost/variant2/variant.hpp>

namespace bp = boost; namespace bvi = bp::variant;

bvi::variant compare_one(bvi::variant a, bvi::variant b) {
    if (bp::holds_alternative<int>(a) && bp::holds_alternative<double>(b)) {
        return a > b ? a : b;
    } else if (bp::holds_alternative<double>(a) && bp::holds_alternative<int>(b)) {
        return a > b ? a : b;
    } else if (bp::holds_alternative<std::string>(a) && bp::holds_alternation