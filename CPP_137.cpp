#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greater<float>()(get<float>(b), get<int>(a)) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s1 = to_string(get<int>(a));
        string s2 = get<string>(b);
        return s2 > s1 ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return greater<float>()(get<float>(a), get<int>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return get<string>(b) > get<string>(a) ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return "None";
    }
    return "None";
}

int main() {
    cout << get<any>(compare_one(1, 2.5)) << endl; // ➞ 2.5
    cout << get<any>(compare_one(1, "2,3")) << endl; // ➞ "2,3"
    cout << get<any>(compare_one("5,1", "6")) << endl; // ➞ "6"
    cout << get<any>(compare_one("1", 1)) << endl; // ➞ "None"

    return 0;
}