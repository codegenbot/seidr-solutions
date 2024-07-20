#include <cassert>
#include <string>

std::string change_base(int a, int b) {
    return std::to_string(a);
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}