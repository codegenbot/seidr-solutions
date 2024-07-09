```cpp
#include <cassert>
#include <string>
#include <stdexcept>

long long solve(std::string binary) {
    return binary.length() == 0 ? -1 : std::stoll(binary, nullptr, 2);
}