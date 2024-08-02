#include <any>
#include <cassert>
#include <string>
#include <algorithm>

std::any compare_one(const std::any& a, const std::any& b);

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "");
    
    return 0;
}