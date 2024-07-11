#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (is_same_type(a, b)) {
        if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
            return boost::any((get<int>(a) > get<int>(b)) ? b : ((get<int>(a) < get<int>(b)) ? a : boost::any("None")));
        } else if (holds_alternative<float>(a) && holds_alternative<float>(b)) {
            return boost::any((get<float>(a) > get<float>(b)) ? b : ((get<float>(a) < get<float>(b)) ? a : boost::any("None")));
        } else {
            string str_a = get<string>(a);
            string str_b = get<string>(b);

            // Remove commas from strings
            str_a.erase(remove(str_a.begin(), str_a.end(), ','), str_a.end());
            str_b.erase(remove(str_b.begin(), str_b.end(), ','), str_b.end());

            // Convert to float and compare
            float f_a = stof(str_a);
            float f_b = stof(str_b);

            if (f_a > f_b) {
                return b;
            } else if (f_a < f_b) {
                return a;
            } else {
                return boost::any("None");
            }
        }
    } else {
        // If types are different, return "None"
        return boost::any("None");
    }
}