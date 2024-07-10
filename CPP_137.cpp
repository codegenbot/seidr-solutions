#include <cassert>
#include <any>
#include <string>
#include <string_view>

std::any compare_one(std::string str, int num) {
    if (num == 1) {
        return std::string("None");
    }
    return std::string("");
}

int main() {
    assert(std::any_cast<std::string_view>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}