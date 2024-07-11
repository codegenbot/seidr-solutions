Here is the completed code:

```cpp
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a < (double) b ? b : a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : boost::any_cast<int>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.cast<string>() > b.cast<string>() ? a : (a == b ? boost::any("None") : b);
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        if (stod(s) > (double) a) return b;
        else if ((double) a == stod(s)) return boost::any("None");
        else return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        if (stod(s) > (double) b) return a;
        else if ((double) b == stod(s)) return boost::any("None");
        else return b;
    } else {
        throw std::runtime_error("Invalid types");
    }
}