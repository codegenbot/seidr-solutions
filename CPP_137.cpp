#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b), str2;
        istringstream iss(str);
        float f;
        iss >> f;
        return (f > a.cast<int>()) ? b : ((str != "None") ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a), str2 = boost::any_cast<string>(b);
        return (str1 > str2) ? a : ((str1 != "None" && str2 != "None") ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a), y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x == y) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = boost::any_cast<float>(a), x = boost::any_cast<int>(b);
        return (f > x) ? a : ((f == x) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a), y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x == y) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a), str2;
        istringstream iss(str);
        float f;
        iss >> f;
        return (f > a.cast<int>()) ? b : ((str != "None") ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a), str2;
        istringstream iss(str);
        int x;
        iss >> x;
        return (x > a.cast<int>()) ? b : ((str != "None") ? b : boost::any("None"));
    }
    else
        return boost::any();
}