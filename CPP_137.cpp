#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (typeid(a) == typeid(int) && typeid(b) == typeid(float)) {
        return b;
    } else if (typeid(a) == typeid(float) && typeid(b) == typeid(string)) {
        return max((float)a, (string)b);
    } else if (typeid(a) == typeid(int) && typeid(b) == typeid(string)) {
        return b;
    } else if (typeid(a) == typeid(float) && typeid(b) == typeid(int)) {
        return boost::any((float)a > (int)b ? a : b);
    } else if (typeid(a) == typeid(string) && typeid(b) == typeid(string)) {
        return max(a, b);
    }
    return "None";
}