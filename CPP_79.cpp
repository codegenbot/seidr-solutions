#include <string>
#include <bitset>

std::string decimal_to_binary(int decimal) {
    std::bitset<32> binary(decimal);
    return binary.to_string();
}