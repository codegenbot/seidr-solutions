#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.get<int>(), b.get<int>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.get<float>(), b.get<float>());
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        if (boost::lexical_cast<string>(max(a.get<string>(), b.get<string>())) == "None")
            return boost::any("None");
        else
            return max(a.get<string>(), b.get<string>());
    }
    else {
        // If the types are not equal, return None
        return boost::any("None");
    }
}