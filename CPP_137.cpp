#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, typeid(float)>(a.type()) && 
        is_same<any_tag, typeid(float)>(b.type())) {
        return a > b ? a : b;
    }
    else if (is_same<any_tag, typeid(double)>(a.type()) && 
              is_same<any_tag, typeid(double)>(b.type())) {
        return a > b ? a : b;
    }
    else if (is_same<any_tag, typeid(long double)>(a.type()) && 
              is_same<any_tag, typeid(long double)>(b.type())) {
        return a > b ? a : b;
    }
    else if ((is_same<any_tag, typeid(string)>(a.type()) || 
              is_same<any_tag, typeid(string)>(b.type())) &&
             (is_same<any_tag, typeid(string)>(a.type()) && 
              is_same<any_tag, typeid(string)>(b.type()))) {
        string sa = any_cast<string>(a).erase(0, 1);
        string sb = any_cast<string>(b).erase(0, 1);
        return (stod(sa) > stod(sb)) ? a : b;
    }
    else if ((is_same<any_tag, typeid(string)>(a.type()) && 
              !is_same<any_tag, typeid(string)>(b.type())) || 
             (!is_same<any_tag, typeid(string)>(a.type()) && 
              is_same<any_tag, typeid(string)>(b.type()))) {
        return "None";
    }
    else {
        throw logic_error("Invalid type");
    }
}