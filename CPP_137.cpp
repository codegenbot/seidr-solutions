#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.cast<string>(), b.cast<string>()) == "None" ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return max(a, boost::any(stoi(b.cast<string>())));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return max(boost::any(stoi(a.cast<string>())), b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max(a, boost::any(stod(b.cast<string>()))); 
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return max(boost::any(stod(a.cast<string>())), b);
    }
    else {
        return "None";
    }
}