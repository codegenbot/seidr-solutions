#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const auto& str : strings) {
        result += str + "\n";
    }
    return result; 
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xy\nz\nw\ nk");
    return 0;
}