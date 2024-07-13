#include <cassert>
#include <vector>
#include <string>
#include <cstdint>

int main() {
    if (Strongest_Extension("Sp", {"671235", "Bb"}) != "Sp.671235")
        assert(0);
    return 0;
}