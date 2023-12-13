#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/assert.hpp>

using namespace std;

variant<int, string> compare_one(const variant<int, string>& a, const variant<int, string>& b) {
    if (a.index() == 0 && b.index() == 1) {
        return to_string(get<0>(a));
    } else if (a.index() == 1 && b.index() == 2) {
        return to_string(get<1>(a));
    } else {
        return "None";
    }
}

int main() {
    assert(compare_one(variant<int, string>(10), variant<int, string>(2.5)) == "2.5");
    assert(compare_one(variant<int, string>(2.5), variant<int, string>(10)) == "10");
    assert(compare_one(variant<int, string>("hello"), variant<int, string>("world")) == "world");
}