#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decimal_to_binary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + (binary.empty() ? "0" : binary) + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    assert(decimal_to_binary(0) == "db0db");     // Added test case for 0
    assert(decimal_to_binary(1) == "db1db");     // Added test case for 1
    assert(decimal_to_binary(8) == "db1000db");  // Added test case for 8
    assert(decimal_to_binary(5) == "db101db");   // Added test case for 5
    assert(decimal_to_binary(255) == "db11111111db"); // Added test case for 255
    return 0;
}