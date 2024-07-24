```cpp
#include <iostream>
#include<string>
#include<algorithm>
#include<stdexcept>
#include<boost/any>

using namespace std;

using namespace boost;

any compare_one(any a, any b) {
    if (is_stateless_wrapper<double>(a)) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        if (da > db)
            return a;
        else
            return b;
    }
    else if (is_stateless_wrapper<string>(a)) {
        string da = any_cast<string>(a);
        string db = any_cast<string>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;
        throw invalid_argument("Tie");
    }
    else
        throw invalid_argument("Invalid argument type");
}

int main() {
    cout << boost::any_cast<double>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<double>(compare_one(1, "2.3")) << endl;
    cout << boost::any_cast<string>(compare_one("5", "6")) << endl;
    cout << boost::any_cast<double>(compare_one("1", 1.0)) << endl;
    return 0;
}