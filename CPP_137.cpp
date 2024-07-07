#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return max(to_string(a.convertible_to<int>()), b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string(b.convertible_to<float>());
        return max(to_string(a), str);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (a.convertible_to<string>() > b.convertible_to<string>()) ? a : ((a.convertible_to<string>() < b.convertible_to<string>()) ? b : boost::any("None")));
    }
    else {
        return boost::any("None");
    }
}

int main() {
    cout << boost::any_cast<any>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<any>(compare_one(1, "2,3")) << endl;
    cout << boost::any_cast<any>(compare_one("5,1", "6")) << endl;
    cout << boost::any_cast<any>(compare_one("1", 1)) << endl;
    return 0;
}