#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    any_cast<string>(a);
    any_cast<string>(b);

    if (is_float(a) && is_float(b)) {
        return greater<float>()(any_cast<float>(a), any_cast<float>(b)) ? a : b;
    }
    else if (is_string(a) && is_string(b)) {
        return greater<string>()(any_cast<string>(a), any_cast<string>(b)) ? a : b;
    }
    else if (is_float(a) && is_string(b)) {
        float fa = lexical_cast<float>(any_cast<string>(a));
        return greater<float>()(fa, lexical_cast<float>(any_cast<string>(b))) ? a : b;
    }
    else if (is_string(a) && is_float(b)) {
        float fb = lexical_cast<float>(any_cast<string>(b));
        return greater<float>()(lexical_cast<float>(any_cast<string>(a)), fb) ? a : b;
    }

    return "None";
}