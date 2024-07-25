#include <iostream>
#include<string>
#include<boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return greater<int>(get<int>(a), get<float>(b));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (get<string>(a) > get<string>(b))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = get<int>(a);
        int y = get<int>(b);
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = get<float>(a);
        float y = get<float>(b);
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    else {
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