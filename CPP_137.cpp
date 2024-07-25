Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(a.get<int>() > b.get<int>() ? &b : (a.get<int>() == b.get<int()) ? "None" : &a);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any(a.get<float>() > b.get<float>() ? &b : (a.get<float>() == b.get<float>() ? "None" : &a));
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)b.get<float>() > a.get<int>() ? &b : ((int)b.get<float>()) == a.get<int>() ? "None" : &b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = (string)b.get();
        return boost::any((stoi(s) > a.get<int>()) ? &b : ((stoi(s))) == a.get<int>() ? "None" : &a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = (string)b.get();
        return boost::any((stof(s)) > a.get<float>() ? &b : ((stof(s))) == a.get<float>() ? "None" : &a);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = (string)a.get();
        return boost::any((stoi(s)) > b.get<int>() ? &a : ((stoi(s))) == b.get<int>() ? "None" : &b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = (string)a.get();
        return boost::any((stof(s)) > b.get<float>() ? &a : ((stof(s))) == b.get<float>() ? "None" : &b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = (string)a.get();
        string s2 = (string)b.get();
        return boost::any((stof(s2)) > stof(s1) ? &b : ((stof(s2))) == stof(s1) ? "None" : &a);
    }
}