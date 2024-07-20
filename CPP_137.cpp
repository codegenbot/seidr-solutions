Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<std::string>(a)) {
        std::string str_a = any_cast<std::string>(a);
        if (is_any_of<std::string>(b)) {
            std::string str_b = any_cast<std::string>(b);
            if (str_a == "None") return b;
            if (str_b == "None") return a;
            if (std::stod(str_a) > std::stod(str_b)) return a;
            else if (std::stod(str_a) < std::stod(str_b)) return b;
            else return boost::any("None");
        } else {
            double num_b = any_cast<double>(b);
            if (str_a == "None") return b;
            if (num_b > std::stod(str_a)) return a;
            else if (num_b < std::stod(str_a)) return b;
            else return boost::any("None");
        }
    } else {
        if (is_any_of<std::string>(b)) {
            std::string str_b = any_cast<std::string>(b);
            double num_a = any_cast<double>(a);
            if (str_b == "None") return a;
            if (num_a > std::stod(str_b)) return a;
            else if (num_a < std::stod(str_b)) return b;
            else return boost::any("None");
        } else {
            double num_a = any_cast<double>(a);
            double num_b = any_cast<double>(b);
            if (num_a > num_b) return a;
            else if (num_a < num_b) return b;
            else return boost::any("None");
        }
    }
}