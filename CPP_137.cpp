#include <cassert>
#include <string>
#include <any>

std::string compare_one(std::string_view str, int num) {
    if (num == 1) {
        return "None";
    }
    return "";
}

int main() {
    assert(std::any_cast<std::string_view>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}