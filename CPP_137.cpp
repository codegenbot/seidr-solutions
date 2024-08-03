#include <any> // Include the <any> header file
#include <string> // Include the <string> header file

std::string compare_one(std::any data, int num) {
    return "None";
}

assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");