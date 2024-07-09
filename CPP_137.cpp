#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stof(x) > stof(y)) ? a : ((stof(x) < stof(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string x = boost::any_cast<string>(a);
        return (stof(x) > boost::any_cast<float>(b)) ? a : ((stof(x) < boost::any_cast<float>(b)) ? b : boost::any("None"));
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string y = boost::any_cast<string>(b);
        return (stof(y) > boost::any_cast<float>(a)) ? b : ((stof(y) < boost::any_cast<float>(a)) ? a : boost::any("None"));
    } else {
        return boost::any("None");
    }
}

int main() {
    cout << boost::any_cast<string>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<string>(compare_one(1, "2,3")) << endl;
    cout << boost::any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << boost::any_cast<string>(compare_one("1", 1)) << endl;
    return 0;
}