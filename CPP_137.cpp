#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(float)) {
        float fa = any_cast<float>(a);
        float fb = any_cast<float>(b);
        return (fa > fb) ? a : ((fa < fb) ? b : any("None"));
    } else if (is_any_of<a>(int)) {
        int fa = any_cast<int>(a);
        int fb = any_cast<int>(b);
        return (fa > fb) ? a : ((fa < fb) ? b : any("None"));
    } else if (is_any_of<a>(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        float fa, fb;
        if (sscanf(sa.c_str(), "%f", &fa) == 1 && sscanf(sb.c_str(), "%f", &fb) == 1) {
            return (fa > fb) ? a : ((fa < fb) ? b : any("None"));
        } else {
            return (sa > sb) ? a : ((sa < sb) ? b : any("None"));
        }
    }
    return a;
}