#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int mainFunction() {
    std::vector<std::string> v = {"x", "yz", "wk"};
    assert(concatenate(v) == "xyzwk");
}