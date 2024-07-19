#include <iostream>
#include <string>
#include <cassert>

template <typename T>
std::string compare_one(const T& t1, const T& t2) {
    return (t1 == t2) ? "Equal" : "Not Equal";
}

int main() {
    assert(compare_one(1, 1) == "Equal");
    assert(compare_one(std::string("abc"), std::string("def")) == "Not Equal");
    return 0;
}