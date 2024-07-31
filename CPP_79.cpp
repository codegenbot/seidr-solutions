#include <string>
#include <bitset>

std::string decimal_to_binary(int num) {
    std::bitset<16> b(num);
    return b.to_string();
}

int main() {
    assert(decimal_to_binary(15) == "11111");
    return 0;
}