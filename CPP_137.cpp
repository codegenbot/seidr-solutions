#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/conversion.hpp>

using namespace std;
using namespace boost;

int main() {
    boost::any a = "123";
    boost::any b = 456.0;

    boost::any result = compare_one(a, b);

    if (result.type() == typeid(string)) {
        cout << boost::any_cast<string>(result) << endl;
    }
    else if (result.type() == typeid(int) || result.type() == typeid(float)) {
        cout << boost::any_cast<int>(result) << endl;
    }

    return 0;
}