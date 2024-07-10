#include <cassert>
#include <vector>
#include <string>

int main() {
    assert(exchange({100, 200}, {200, 200}) == "NO");
    return 0;
}