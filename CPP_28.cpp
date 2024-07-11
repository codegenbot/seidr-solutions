#include <iostream>
#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;

}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}