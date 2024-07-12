#include <iostream>
#include <string>
#include <cassert>

std::string compare_one(std::string a, std::string b) {
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(compare_one("1", "1") == "Equal");
    return 0;
}