#include <any>
#include <string>

std::string compare_one(std::string str, int num) {
    return std::to_string(num) == str ? "Equal" : "Not Equal";
}

assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "Not Equal");