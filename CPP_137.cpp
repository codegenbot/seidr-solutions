#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/assert.hpp>

using variant = boost::variant<int, std::string>;

std::string compare_one(const variant& a, const variant& b) {
    if (a.index() == 0 && b.index() == 1) {
        return to_string(get<0>(a));
    } else if (a.index() == 1 && b.index() == 2) {
        return to_string(get<1>(a));
    } else {
        return "None";
    }
}

int main() {
    std::cout << compare_one(variant(10), variant("hello")) << std::endl;
    std::cout << compare_one(variant("hello"), variant(10)) << std::endl;
    return 0;
}