#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::string& str1, const std::string& str2) {
    // Implement the comparison logic here
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "");
    
    return 0;
}