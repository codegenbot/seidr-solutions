#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

template <typename T>
T compare(boost::any a, boost::any b) {
    assert(a.type() == typeid(T) && b.type() == typeid(T));
    
    if (boost::any_cast<T>(a) > boost::any_cast<T>(b))
        return boost::any_cast<T>(a);
    else if (boost::any_cast<T>(a) < boost::any_cast<T>(b))
        return boost::any_cast<T>(b);
    else
        return T();
}

template <>
string compare<string>(boost::any a, boost::any b) {
    assert(a.type() == typeid(string) && b.type() == typeid(string));
    
    if (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b)))
        return boost::any_cast<string>(a);
    else if (stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b)))
        return boost::any_cast<string>(b);
    else
        return "None";
}

template <>
string compare<string>(boost::any a, boost::any b) {
    assert((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int)));
    
    if (stof(boost::any_cast<string>(a)) > boost::any_cast<int>(b))
        return boost::any_cast<string>(a);
    else if (stof(boost::any_cast<string>(a)) < boost::any_cast<int>(b))
        return boost::any_cast<string>(b);
    else
        return "None";
}