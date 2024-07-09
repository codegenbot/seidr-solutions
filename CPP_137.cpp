#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert<int>(), b.convert<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert<float>(), b.convert<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert<string>();
        string str2 = b.convert<string>();

        size_t pos = 0, start = 0;
        while ((pos = str1.find('.', start)) != string::npos) {
            str1.replace(pos, 1, ",");
            start = pos + 1;
        }

        pos = 0, start = 0;
        while ((pos = str2.find('.', start)) != string::npos) {
            str2.replace(pos, 1, ",");
            start = pos + 1;
        }

        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
               (a.type() != typeid(int) && b.type() == typeid(int))) {
        return boost::any("None");
    }

    return a > b ? a : b;
}