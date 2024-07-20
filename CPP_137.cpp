#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greaterThan(a, b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return greaterThan(b, a);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return greaterThan<string>(a, to_string(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return greaterThan(to_string(a), b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return greaterThan<string>(a, b);
    }

    return boost::any("None");
}

boost::any greaterThan(boost::any a, boost::any b) {
    if (get<int>(a) > get<float>(b))
        return a;
    else if (get<float>(a) > get<int>(b))
        return a;
    else if (get<string>(a) > get<string>(b))
        return a;
    else
        return boost::any("None");
}

boost::any greaterThan<string>(boost::any a, boost::any b) {
    string s1 = get<string>(a);
    string s2 = get<string>(b);

    int comp = s1.compare(s2);

    if (comp > 0)
        return a;
    else if (comp < 0)
        return b;
    else
        return boost::any("None");
}