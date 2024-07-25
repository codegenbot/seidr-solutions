Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <boost/type_traits.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (boost::is_same<boost::any_cast<int>(a), boost::any_cast<int>(b)).value()) {
            return "None";
        } else if (boost::is_same<boost::any_cast<double>(a), boost::any_cast<double>(b)).value()) {
            if (!std::isnan(boost::any_cast<double>(a)) && !std::isnan(boost::any_cast<double>(b))) {
                return a > b ? a : b;
            } else {
                return "None";
            }
        } else {
            std::string str_a = boost::any_cast<std::string>(a);
            std::string str_b = boost::any_cast<std::string>(b);
            double num_a = std::stod(str_a);
            double num_b = std::stod(str_b);
            if (std::isnan(num_a) || std::isnan(num_b)) {
                return "None";
            } else {
                return num_a > num_b ? a : b;
            }
        }
    } else {
        if (boost::is_same<boost::any_cast<int>(a), boost::any_cast<int>(b)).value()) {
            return a > b ? a : b;
        } else if (boost::is_same<boost::any_cast<double>(a), boost::any_cast<double>(b)).value()) {
            return a > b ? a : b;
        } else {
            std::string str_a = boost::any_cast<std::string>(a);
            double num_a = std::stod(str_a);
            if (std::isnan(num_a)) {
                return b;
            } else {
                return a > b ? a : b;
            }
        }
    }
}