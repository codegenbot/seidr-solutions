#include <boost/any.hpp>
#include <string>
#include <vector>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<type_of<boost::any>, int>(a.type()) && 
        is_same<type_of<boost::any>, int>(b.type())) {
        return max(a.convert<int>(), b.convert<int>());
    } else if (is_same<type_of<boost::any>, double>(a.type()) && 
               is_same<type_of<boost::any>, double>(b.type())) {
        return max(a.convert<double>(), b.convert<double>());
    } else if (is_same<type_of<boost::any>, string>(a.type()) && 
               is_same<type_of<boost::any>, string>(b.type())) {
        return (max(a.cast<string>(), b.cast<string>()) == a.cast<string>() ? "None" : a.cast<string>());
    } else if (is_same<type_of<boost::any>, int>(a.type())) {
        if (is_same<type_of<boost::any>, double>(b.type()))
            return max(a.convert<int>(), b.convert<double>()) > 0 ? boost::any(b) : "None";
        else
            return "None";
    } else {
        if (is_same<type_of<boost::any>, int>(b.type()))
            return max(a.convert<double>(), b.convert<int>()) > 0 ? a : "None";
        else
            return "None";
    }
}