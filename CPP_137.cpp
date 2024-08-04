#include <cassert>
#include <any>
#include <string>

std::any compare_one(const std::string& str1, const std::string& str2) {
    return str1 == str2 ? std::make_any<std::string>("Same") : std::make_any<std::string>("Different");
}

int main() {
    assert(std::any_cast<std::string>(compare_one("1", "1")) == "Same");
    return 0;
}