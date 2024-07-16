#include <string>
#include <cassert>

std::string compare(const std::string& a, const std::string& b) {
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(compare(std::string("1"), std::string("1")) == "Equal");
    return 0;
}