#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto &s : strings) {
        result += s;
    }
    return result;

}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}