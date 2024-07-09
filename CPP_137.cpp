#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string str_a = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string str_b = any_cast<string>(b);
            return str_b > str_a ? b : (str_b == str_a ? "None" : a);
        } else {
            return any_cast<double>(b) > std::stod(str_a) ? b : (any_cast<double>(b) == std::stod(str_a) ? "None" : a);
        }
    } else if (is_any_of<string>(b)) {
        string str_b = any_cast<string>(b);
        return std::stod(str_b) > any_cast<double>(a) ? b : (std::stod(str_b) == any_cast<double>(a) ? "None" : a);
    } else {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        return db > da ? b : (db == da ? "None" : a);
    }
}