#include <iostream>
#include <string>
#include <bitset>

std::string decimal_to_binary(int decimal) {
    std::bitset<32> bin(decimal);
    return "db" + bin.to_string() + "db";
}