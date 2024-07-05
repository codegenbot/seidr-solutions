#include <iostream>
#include <string>
#include <cassert>

std::string decimal_to_binary(int decimal) {
    std::string result = "db";
    if (decimal == 0) {
        result += "0";
    } else {
        while (decimal > 0) {
            result = (char)((decimal % 2) + '0') + result;
            decimal /= 2;
        }
    }
    result += "db";
    return result;
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    std::cout << decimal_to_binary(15) << std::endl; // for demonstration
    return 0;
}