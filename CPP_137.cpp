#include <boost/any.hpp>
#include <boost/any_cast.hpp>
#include <string>

bool compare_one(boost::any &a, boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return get<int>(a) > get<int>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return get<float>(a) > get<float>(b);
    } else if ((a.type() == typeid(string) && b.type() == typeid(int)) || 
               (a.type() == typeid(int) && b.type() == typeid(string))) {
        return get<string>(a).compare(to_string(get<int>(b))) > 0;
    } else if ((a.type() == typeid(string) && b.type() == typeid(float)) || 
               (a.type() == typeid(float) && b.type() == typeid(string))) {
        return get<string>(a).compare(to_string(get<float>(b))) > 0;
    } else {
        return false;
    }
}

boost::any largest(boost::any &a, boost::any &b) {
    if (compare_one(a, b)) {
        return a;
    } else if (!compare_one(b, a)) {
        return b;
    } else {
        return boost::any("None");
    }
}