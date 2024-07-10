#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::string& str, int num) {
    if (str == "1" && num == 1) {
        return std::string("None");
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");

    return 0;
}