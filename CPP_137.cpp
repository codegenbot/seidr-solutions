```cpp
#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);
        float f1 = stof(sa), f2 = stof(sb);
        if(f1 > f2) return a;
        else if(f1 < f2) return b;
        else return boost::any("None");
    } else {
        return boost::any("None");
    }
}