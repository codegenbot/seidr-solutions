[PYTHON]
#include <boost/any.hpp>
#include <iostream>

using namespace boost;
using std::string;

void compare_one(boost::any& a, boost::any& b) {
    if (a.index() == 0 && b.index() == 1) {
        int x = get<0>(a);
        float y = get<1>(b);
        return to_string((x > y) ? a : b);
    } else if (a.index() == 1 && b.index() == 0) {
        float x = get<1>(a);
        int y = get<0>(b);
        return to_string((x > y) ? a : b);
    } else if (a.index() == 2 && b.index() == 2) {
        string s = get<2>(a);
        try {
            float x = stof(s);
            s = get<2>(b);
            float y = stof(s);
            return to_string((x > y) ? a : b);
        } catch (invalid_argument& e) {
            return "None";
        }
    } else {
        return "None";
    }
}

int main() {
    boost::any a = 10;
    boost::any b = 2.5;
    compare_one(a, b);
    assert(equal_to(c, "2.5"));
    std::cout << "Success!" << std::endl;
}
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(boost::any(10), boost::any(2.5)) == "2.5"
# Test case 2:
assert compare_one(boost::any(2.5), boost::any(10)) == "10"
# Test case 3:
assert compare_one(boost::any("hello"), boost::any("world")) == "world"
[/TESTS]
