#include <iostream>
#include <string>
#include <variant>

using namespace std;

std::variant<int, string> compare_one(const std::variant<int, string>& a, const std::variant<int, string>& b) {
    if (a.index() == 0 && b.index() == 1) {
        return to_string(get<0>(a));
    } else if (a.index() == 1 && b.index() == 2) {
        return to_string(get<1>(a));
    } else {
        return "None";
    }
}

int main() {
    assert(compare_one(std::variant<int, string>(10), std::variant<int, string>(2.5)) == "2.5");
    assert(compare_one(std::variant<int, string>(2.5), std::variant<int, string>(10)) == "10");
    assert(compare_one(std::variant<int, string>("hello"), std::variant<int, string>("world")) == "world");
}