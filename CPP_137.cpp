#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(float.class)) {
        float fa = any_cast<float>(a);
        float fb = any_cast<float>(b);

        return (fa > fb) ? a : (fb > fa) ? b : boost::any("None");
    } else if (is_any_of<a>(double.class)) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);

        return (da > db) ? a : (db > da) ? b : boost::any("None");
    } else if (is_any_of<a>(string.class)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);

        bool fa = stof(sa) > stof(sb);
        bool fb = stof(sb) > stof(sa);

        return (fa || !fb) ? a : (fb && !fa) ? b : boost::any("None");
    }

    return boost::any();
}