#include <iostream>
#include <string>
#include <tuple>
#include <cassert>

std::tuple<std::string, std::string> compare_one(std::string s1, std::string s2) {
    if(s1 == s2) {
        return std::make_tuple("Equal", "");
    } else {
        return std::make_tuple("Not Equal", "None");
    }
}

int main() {
    auto result = compare_one("1", "1");
    assert(std::get<0>(result) == "Equal" && std::get<1>(result) == "");
}