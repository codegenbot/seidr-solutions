#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<boost::any_tag_float>(a.type()) && is_same<boost::any_tag_float>(b.type())) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fb > fa ? b : a;
    }
    else if (is_same<boost::any_tag_double>(a.type()) && is_same<boost::any_tag_double>(b.type())) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return db > da ? b : a;
    }
    else if (is_same<boost::any_tag_string>(a.type()) && is_same<boost::any_tag_string>(b.type())) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return sb > sa ? b : a;
    }
    else if (is_same<boost::any_tag_float>(a.type())) {
        float fa = boost::any_cast<float>(a);
        double db = boost::any_cast<double>(b);
        return db > fa ? b : a;
    }
    else if (is_same<boost::any_tag_double>(a.type())) {
        double da = boost::any_cast<double>(a);
        string sb = boost::any_cast<string>(b);
        return compare_string(da, sb) ? b : a;
    }
    else {
        double da = boost::any_cast<double>(a);
        float fb = boost::any_cast<float>(b);
        return fb > da ? b : a;
    }

    bool compare_string(double a, string b) {
        size_t pos = b.find(',');
        if (pos != string::npos) {
            double ba = stod(b.substr(0, pos));
            double bb = stod(b.substr(pos + 1));
            return bb > ba ? true : false;
        }
        else {
            return stod(b) > a ? true : false;
        }
    }