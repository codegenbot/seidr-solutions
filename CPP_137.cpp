#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num;
        istringstream iss(str);
        iss >> num;
        return max(a, boost::any(num));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(max(a, boost::any(b)));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        istringstream iss(str);
        float f;
        iss >> f;
        return max(a, boost::any(max(f, num)));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(b);
        string str1 = boost::any_cast<string>(a);
        istringstream iss(str1);
        int i;
        iss >> i;
        return max(a, boost::any(max(i, f)));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        istringstream iss(str1), iss2(str2);
        int i, j;
        iss >> i;
        iss2 >> j;
        if (i > j) return a;
        else if (j > i) return b;
        else return boost::any("None");
    } else {
        return boost::any("None");
    }
}