#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a, b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a, b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        int a1 = 0, a2 = 0;
        int b1 = 0, b2 = 0;

        if (string::npos != sa.find('.')) {
            a1 = stoi(sa.substr(0, sa.find('.')));
            a2 = stod(sa.substr(sa.find('.') + 1));
        }
        if (string::npos != sb.find('.')) {
            b1 = stoi(sb.substr(0, sb.find('.')));
            b2 = stod(sb.substr(sb.find('.') + 1));
        }

        if ((a1 > b1) || (a1 == b1 && a2 > b2))
            return a;
        else if ((b1 > a1) || (b1 == a1 && b2 > a2))
            return b;

        return boost::any("None");
    } else {
        // If the types are different, compare as strings
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        if (sa > sb)
            return a;
        else if (sb > sa)
            return b;

        return boost::any("None");
    }
}