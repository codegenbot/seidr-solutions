#include <cassert>
#include <any>
#include <string>

std::any compare_one(std::string str, int num);

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}