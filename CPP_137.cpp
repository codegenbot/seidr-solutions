Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) boost::any_cast<int>(a) > (int) boost::any_cast<int>(b)
            ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float) boost::any_cast<float>(a) > (float) boost::any_cast<float>(b)
            ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        istringstream iss(str1);
        double num1;
        if (!(iss >> noskipws >> num1)) return a;
        istringstream iss2(str2);
        double num2;
        if (!(iss2 >> noskipws >> num2)) return b;
        return (num1 > num2) ? a : (num1 < num2 ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}