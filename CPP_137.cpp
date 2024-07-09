Here is the completed code:

```cpp
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string s1 = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string s2 = any_cast<string>(b);
            return s2 > s1 ? b : (s1 > s2 ? a : boost::any("None"));
        } else {
            double d = stod(any_cast<string>(b));
            return d > stod(s1) ? b : (stod(s1) > d ? a : boost::any("None"));
        }
    } else if (is_any_of<string>(b)) {
        string s2 = any_cast<string>(b);
        if (is_any_of<string>(a)) {
            string s1 = any_cast<string>(a);
            return s1 > s2 ? a : (s2 > s1 ? b : boost::any("None"));
        } else {
            double d = stod(any_cast<string>(a));
            return d > stod(s2) ? a : (stod(s2) > d ? b : boost::any("None"));
        }
    } else {
        double d1 = any_cast<double>(a);
        double d2 = any_cast<double>(b);
        return d1 > d2 ? a : (d2 > d1 ? b : boost::any("None"));
    }
}