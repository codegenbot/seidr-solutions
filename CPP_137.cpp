#include <string>
#include <cassert>

template<typename T>
std::string compare_one(const T& s, int i) {
    return "None";
}

int main() {
    assert(compare_one(std::string("1"), 1) == "None");
    return 0;
}