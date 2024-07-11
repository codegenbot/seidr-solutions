#include <boost/any.hpp>
#include <cassert>
#include <string>

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
    any a = 10;
    any b = 20;
    any result = compare_one(a, b);
    assert(any_cast<int>(result) == 20);

    return 0;
}