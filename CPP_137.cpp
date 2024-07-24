```
#include <boost/variant.hpp>
#include <string>

using namespace boost;

variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    return visit([&](auto&& a, auto&& b) -> variant<string, int, float> {
        if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
            string sA = get<string>(a);
            string sB = get<string>(b);
            if (sA > sB) {
                return "Greater";
            } else if (sA < sB) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (holds_alternative<int>(a) && holds_alternation