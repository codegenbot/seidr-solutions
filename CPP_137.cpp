#include <string>

template <typename T>
std::string compare(const T& val1, const T& val2) {
    return val1 == val2 ? "Equal" : "Not Equal";
}

assert(compare(std::string("1"), 1) == "Not Equal");