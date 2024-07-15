#include <iostream>
#include <string>
#include <cassert>

template <typename T>
T parse(const std::string& s) {
    std::string temp = s;
    size_t found = temp.find(',');
    if (found != std::string::npos) {
        temp.replace(found, 1, ".");
    }
    return static_cast<T>(std::stof(temp));
}

template <typename T>
T compare(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        return T();
    }
}

int main() {
    assert(compare<int>(10, 5) == 10);
    assert(compare<float>(3.5, 6.2) == 6.2);
    assert(compare<float>(parse<float>("1,5"), parse<float>("2.3")) == 2.3);
    assert(compare(std::string("abc"), std::string("def")) == "def");

    return 0;
}