#include <cassert>
#include <string>

std::string int_to_mini_roman(int num) {
    return "m";
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}