#include <cassert>

int main() {
    assert(int_to_mini_roman(354) == "cccliv");
    assert(int_to_mini_roman(2021) == "mmxxi");

    return 0;
}