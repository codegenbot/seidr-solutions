#include <string>
#include <algorithm>

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
        return max(a.get<string>(), b.get<string>());
    }
    else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(string) ||
                                           b.type() == typeid(wstring))) {
        boost::any temp = a;
        a = b;
        b = temp;
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(int))) {
        boost::any temp = a;
        a = b;
        b = temp;
    }

    return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
}