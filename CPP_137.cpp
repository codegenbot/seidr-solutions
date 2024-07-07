Here is the completed code:

```cpp
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<double>(a)) {
        if (is_any_of<double>(b)) {
            return (get<double>(a) > get<double>(b)) ? a : (get<double>(a) < get<double>(b)) ? b : boost::any("None");
        } else {
            string strB = boost::any_cast<string>(b);
            if (strB.find(',') != string::npos || strB.find('.') != string::npos) {
                return (get<double>(a) > stod(strB)) ? a : (get<double>(a) < stod(strB)) ? b : boost::any("None");
            } else {
                return (get<double>(a) > std::stod(strB)) ? a : (get<double>(a) < std::stod(strB)) ? b : boost::any("None");
            }
        }
    } else if (is_any_of<string>(a)) {
        string strA = boost::any_cast<string>(a);
        if (strA.find(',') != string::npos || strA.find('.') != string::npos) {
            if (is_any_of<double>(b)) {
                return (stod(strA) > get<double>(b)) ? a : (stod(strA) < get<double>(b)) ? b : boost::any("None");
            } else {
                string strB = boost::any_cast<string>(b);
                if (strB.find(',') != string::npos || strB.find('.') != string::npos) {
                    return (stod(strA) > stod(strB)) ? a : (stod(strA) < stod(strB)) ? b : boost::any("None");
                } else {
                    return (stod(strA) > std::stod(strB)) ? a : (stod(strA) < std::stod(strB)) ? b : boost::any("None");
                }
            }
        } else {
            if (is_any_of<double>(b)) {
                return (stod(strA) > get<double>(b)) ? a : (stod(strA) < get<double>(b)) ? b : boost::any("None");
            } else {
                string strB = boost::any_cast<string>(b);
                if (strB.find(',') != string::npos || strB.find('.') != string::npos) {
                    return (stod(strA) > stod(strB)) ? a : (stod(strA) < stod(strB)) ? b : boost::any("None");
                } else {
                    return (stod(strA) > std::stod(strB)) ? a : (stod(strA) < std::stod(strB)) ? b : boost::any("None");
                }
            }
        }
    } else {
        if (is_any_of<double>(b)) {
            return (get<double>(a) > get<double>(b)) ? a : (get<double>(a) < get<double>(b)) ? b : boost::any("None");
        } else {
            string strB = boost::any_cast<string>(b);
            if (strB.find(',') != string::npos || strB.find('.') != string::npos) {
                return (get<double>(a) > stod(strB)) ? a : (get<double>(a) < stod(strB)) ? b : boost::any("None");
            } else {
                return (get<double>(a) > std::stod(strB)) ? a : (get<double>(a) < std::stod(strB)) ? b : boost::any("None");
            }
        }
    }
}