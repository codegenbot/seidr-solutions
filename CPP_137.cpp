#include <string>
#include <cassert>

std::string compare_one(const std::string& a, const std::string& b) {
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(compare_one(std::string("1"), std::string("1")) == "Equal");
    assert(compare_one(std::string("1"), std::string("2")) == "Not Equal");
    return 0;
}