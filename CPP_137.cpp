#include <boost/any.hpp>
#include <string>
#include <cassert>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() != b.type()) {
        return "None";
    }

    if (a == b) {
        return "None";
    }

    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) {
            return a;
        } else {
            return b;
        }
    }

    return "None";
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    assert(boost::any_cast<float>(compare_one(3.14f, 2.71f)) == 3.14f);
    assert(boost::any_cast<int>(compare_one(5, 10)) == 10);

    return 0;
}