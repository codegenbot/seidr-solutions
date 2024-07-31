#include <string>
#include <cassert>

std::string change_base(int x, int base);

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
}