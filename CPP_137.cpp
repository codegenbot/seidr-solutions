#include <string>
#include <sstream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None")));
    } else if (is_any_of<b>(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return (da > db) ? b : ((da < db) ? a : boost::any("None")));
    }
    if (is_any<a>(string) && is_any<b>(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (sa > sb) ? a : ((sa < sb) ? b : boost::any("None")));
    }
    if (is_any<a>(string)) {
        string s = boost::any_cast<string>(a);
        double da = std::stod(s);
        double db = boost::any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None")));
    }
    if (is_any<b>(string)) {
        string s = boost::any_cast<string>(b);
        double da = boost::any_cast<double>(a);
        double db = std::stod(s);
        return (da > db) ? a : ((da < db) ? b : boost::any("None")));
    }
    return boost::any("Error");
}