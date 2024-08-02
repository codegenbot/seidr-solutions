#include <any>
#include <string>
#include <iostream>

if (a.type() == b.type()) {
    if (a.type() == typeid(int) && any_cast<int>(a) != any_cast<int>(b)) {
        return (any_cast<int>(a) > any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && any_cast<float>(a) != any_cast<float>(b)) {
        return (any_cast<float>(a) > any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && any_cast<string>(a) != any_cast<string>(b)) {
        return (stof(any_cast<string>(a)) > stof(any_cast<string>(b))) ? a : b;
    }
}
return "None";