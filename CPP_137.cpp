#include <boost/any.hpp>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == type_id<int>()) {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return (x > y) ? a : ((x < y) ? b : any("None"));
        } else if (a.type() == type_id<double>()) {
            double x = boost::any_cast<double>(a);
            double y = boost::any_cast<double>(b);
            return (x > y) ? a : ((x < y) ? b : any("None"));
        } else if (a.type() == type_id<string>()) {
            string x = boost::any_cast<string>(a);
            string y = boost::any_cast<string>(b);
            return (x > y) ? a : ((x < y) ? b : any("None"));
        }
    } else {
        if (a.type() == type_id<int>()) {
            int x = boost::any_cast<int>(a);
            double y = boost::any_cast<double>(b);
            return (y < x) ? a : b;
        } else if (a.type() == type_id<double>()) {
            double x = boost::any_cast<double>(a);
            string y = boost::any_cast<string>(b);
            if (stod(y) > x) return b;
            else return a;
        } else if (a.type() == type_id<string>()) {
            string x = boost::any_cast<string>(a);
            double y = boost::any_cast<double>(b);
            if (stod(x) < y) return a;
            else return b;
        }
    }
}