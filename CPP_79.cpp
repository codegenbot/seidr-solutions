#include <bitset>

string decimal_to_binary(int decimal){
    string binary = bitset<32>(decimal).to_string();
    binary = binary.substr(binary.find('1')); // Remove leading zeros
    return "db" + binary + "db";
}