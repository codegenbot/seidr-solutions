#include <boost/any_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(float())) try {
        float fa = any_cast<float>(a);
        float fb = any_cast<float>(b);

        if (fa > fb)
            return a;
        else if (fb > fa)
            return b;

        return "None";
    } catch (bad_any_cast&) {}
    
    // At least one of the values is not a number
    if (is_any_of<a>(std::string())) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);

        if (sa > sb)
            return a;
        else if (sb > sa)
            return b;

        return "None";
    }

    // If we are here, none of the values were numbers
    return "None";
}