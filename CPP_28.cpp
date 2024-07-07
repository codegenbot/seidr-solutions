#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return {result}; 
}

int main() {
    assert (concatenate({"x", "y", "z", "w", "k"}) == std::vector<std::string>{"xyzwk"});
    return 0;
}