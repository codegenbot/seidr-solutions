#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);
        if (stof(sa) > stof(sb))
            return a;
        else if (stof(sa) == stof(sb))
            return "None";
        else
            return b;
    } else if (!is_float(a) && !is_float(b)) {
        return "None";
    }
}

int main() {
    any firstVal = 5.7f;
    any secondVal = 2.3f;
    cout << get<float>(compare_one(firstVal, secondVal));
    return 0;
}