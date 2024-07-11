#include <boost/any.hpp>
#include <cassert>
#include <string>
#include <iostream>

using boost::any;
using boost::any_cast;
using std::string;

any compare_one(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (any_cast<int>(a) > any_cast<int>(b)) {
            return a;
        } else if (any_cast<int>(a) < any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (any_cast<float>(a) > any_cast<float>(b)) {
            return a;
        } else if (any_cast<float>(a) < any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(any_cast<string>(a)) > stof(any_cast<string>(b))) {
            return a;
        } else if (stof(any_cast<string>(a)) < stof(any_cast<string>(b))) {
            return b;
        }
    }
    return any();
}

int main() {
    any result = compare_one(10, 20);
    assert(any_cast<int>(result) == 20);

    result = compare_one(15.5f, 10.2f);
    assert(any_cast<float>(result) == 15.5f);

    result = compare_one(string("hello"), string("world"));
    assert(any_cast<string>(result) == "world");

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}