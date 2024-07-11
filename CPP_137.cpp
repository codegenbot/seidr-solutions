Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int))
        return (get<int>(a) > get<int>(b)) ? a : ((get<int>(a) < get<int>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(float) && b.type() == typeid(float))
        return (get<float>(a) > get<float>(b)) ? a : ((get<float>(a) < get<float>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(string) && b.type() == typeid(string))
        return (get<string>(a) > get<string>(b)) ? a : ((get<string>(a) < get<string>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(int) && b.type() == typeid(float))
        return (get<int>(a) > get<float>(b)) ? a : ((get<int>(a) < get<float>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(int) && b.type() == typeid(string))
        return (stoi(get<string>(b)) > get<int>(a)) ? b : ((stoi(get<string>(b)) < get<int>(a)) ? a : boost::any("None"));
    else if (a.type() == typeid(float) && b.type() == typeid(int))
        return (get<float>(a) > get<int>(b)) ? a : ((get<float>(a) < get<int>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(float) && b.type() == typeid(string))
        return (stod(get<string>(b)) > get<float>(a)) ? b : ((stod(get<string>(b)) < get<float>(a)) ? a : boost::any("None"));
    else if (a.type() == typeid(string) && b.type() == typeid(int))
        return (stoi(get<string>(a)) > get<int>(b)) ? a : ((stoi(get<string>(a)) < get<int>(b)) ? b : boost::any("None"));
    else if (a.type() == typeid(string) && b.type() == typeid(float))
        return (stod(get<string>(a)) > get<float>(b)) ? a : ((stod(get<string>(a)) < get<float>(b)) ? b : boost::any("None"));
    else
        return boost::any("Invalid input");
}