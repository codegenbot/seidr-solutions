#include <string>
#include <cassert> // Include the necessary header

template <typename T>
std::string compare(const T& val1, const T& val2) {
    return val1 == val2 ? "Equal" : "Not Equal";
}

int main() {
    assert(compare(std::string("1"), std::string("1")) == "Equal"); // Update the function call
    return 0;
}