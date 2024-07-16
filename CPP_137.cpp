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
    assert(compare_one("1", "1") == "Equal");
    assert(compare_one("1", "2") == "Not Equal");
    return 0;
}