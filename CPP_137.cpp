#include <boost/any.hpp>
#include <boost/more_results.hpp>
#include <string>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_type, double>::value && is_same<any_type, double>::value) {
        return any((*(double*)(&a)) > (*(double*)(&b)) ? &a : &b);
    } else if (is_same<any_type, string>::value && is_same<any_type, string>::value) {
        return any((*(string*)(&a)) > (*(string*)(&b)) ? &a : &b);
    } else {
        return "None";
    }
}