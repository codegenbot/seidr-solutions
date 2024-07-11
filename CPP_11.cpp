#include <string>

std::string string_xor(const std::string& a, const std::string& b);

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}