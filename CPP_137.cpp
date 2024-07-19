#include <string>
#include <iostream>
#include <cassert>
#include <any>

using namespace std;

std::string compare_one(const std::string& s1, int number) {
    if (s1 == std::to_string(number)) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    assert(compare_one(std::string("1"), 1) == "Not equal");
}