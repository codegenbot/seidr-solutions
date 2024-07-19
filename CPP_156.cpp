#include <cassert>

std::string int_to_mini_roman(int num);

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}