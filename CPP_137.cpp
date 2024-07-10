#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA != "None" && strB != "None") {
            if (stod(strA) > stod(strB))
                return a;
            else
                return b;
        }
        else if (strA == "None" && strB == "None")
            return boost::any("None");
    }

    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;

    return boost::any("None");
}