#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (stoi((string)b.cast<string>().erase(0, 1)).compare(stoi((string)a.cast<string>().erase(0, 1))) > 0) ? a : ((stoi((string)b.cast<string>().erase(0, 1)) > stoi((string)a.cast<string>().erase(0, 1))) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (stoi((string)b.cast<string>().erase(0, 1)).compare(stoi((string)a.cast<int>())) > 0) ? b : ((stoi((string)b.cast<string>().erase(0, 1)) > stoi((int)a)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : ((boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : ((boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stod((string)b.cast<string>()) > stod((string)a.cast<string()))) ? b : ((stod((string)b.cast<string>()) > stod((string)a.cast<string()))) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (stod((string)b.cast<string>()) > stod((string)a.cast<string()))) ? b : ((stod((string)b.cast<string>()) > stod((string)a.cast<string()))) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : ((boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(b) > boost::any_cast<int>(a)) ? b : ((boost::any_cast<int>(b) > boost::any_cast<int>(a)) ? b : boost::any(string("None")));
    }
    
    if (!boost::any_cast<string>(a).compare(0, 0, boost::any_cast<string>(b), 0, 1) && !boost::any_cast<string>(a).compare(0, boost::any_cast<string>(a).length(), boost::any_cast<string>(b), 0, boost::any_cast<string>(b).length())) {
        return a;
    } else if (!boost::any_cast<string>(b).compare(0, 0, boost::any_cast<string>(a), 0, 1) && !boost::any_cast<string>(b).compare(0, boost::any_cast<string>(b).length(), boost::any_cast<string>(a), 0, boost::any_cast<string>(a).length())) {
        return b;
    } else {
        return boost::any(string("None"));
    }
}