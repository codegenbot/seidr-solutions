```cpp
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(std::vector<std::string> strings) {
    std::string myString = "";
    for (const auto& str : strings) {
        myString += str;
    }
    return myString;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}