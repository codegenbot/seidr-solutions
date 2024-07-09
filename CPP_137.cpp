#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == type_id<int>() && b.type() == type_id<float>()) {
        return max(a, b);
    }
    else if (a.type() == type_id<float>() && b.type() == type_id<string>()) {
        istringstream iss(static_cast<string>(b));
        float b_float;
        iss >> b_float;
        return a > b_float ? a : b;
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        if (static_cast<string>(a) > static_cast<string>(b))
            return a;
        else if (static_cast<string>(a) < static_cast<string>(b))
            return b;
        else
            return any("None");
    }
    else if (a.type() == type_id<int>() && b.type() == type_id<string>()) {
        istringstream iss(static_cast<string>(b));
        int b_int;
        iss >> b_int;
        return a > b_int ? a : b;
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<float>()) {
        istringstream iss(static_cast<string>(a));
        float a_float;
        iss >> a_float;
        return a_float > boost::any_cast<float>(b) ? a : b;
    }
    else
        return any("None");
}

int main() {
    any a = 10; // example int value
    any b = 5.6f; // example float value

    any result = compare_one(a, b);

    if (result.type() == type_id<string>()) {
        cout << "The result is: " << boost::any_cast<string>(result) << endl;
    }
    else {
        cout << "The result is: " << boost::any_cast<int>(result) << endl;
    }

    return 0;
}