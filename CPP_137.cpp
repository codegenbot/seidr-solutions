#include <string> // Add this line

assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "1");