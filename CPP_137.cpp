#include <any>
#include <string>
#include <cassert>   

std::any compare_one(std::any a, std::any b) {
    if (std::any_cast<std::string>(a) < std::any_cast<std::string>(b)) {
        return b;
    }
    return a;
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::any(std::string("1")), std::any(std::string("2")))) == "2");
    return 0;
}