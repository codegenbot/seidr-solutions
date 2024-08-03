#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == type_id<int>() && b.type() == type_id<float>()) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<int>()) {
        return (float)a > b.convert_to<int>() ? a : "None";
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        return a.convert_to<string>() > b.convert_to<string>() ? a : "None";
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<string>()) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return x > stoi(y) ? a : "None";
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<int>()) {
        int x = boost::any_cast<int>(b);
        string y = boost::any_cast<string>(a);
        return stoi(y) > x ? a : "None";
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<string>()) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return x > stof(y) ? a : "None";
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<float>()) {
        float x = boost::any_cast<float>(b);
        string y = boost::any_cast<string>(a);
        return stof(y) > x ? a : "None";
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<int>()) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : "None");
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<float>()) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : (x < y ? b : "None");
    }
    else {
        return "None";
    }
}