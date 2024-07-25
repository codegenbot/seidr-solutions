Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : ((string)a == (string)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)b > (int)a ? b : ((float)b == (int)a) ? boost::any("None") : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = stoi((string)b);
        return (x > (int)a) ? b : ((x == (int)a) ? boost::any("None") : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float y = stof((string)b);
        return (y > (float)a) ? b : ((y == (float)a) ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = stoi(a.convert_to<string>());
        return (x > (int)b) ? a : ((x == (int)b) ? boost::any("None") : boost::any(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float y = stof(a.convert_to<string>());
        return (y > (float)b) ? a : ((y == (float)b) ? boost::any("None") : boost::any(b));
    }
}