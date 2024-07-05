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
    return "db" + (binary == "" ? "0" : binary) + "db";
}

int main() {
    // Test the function
    assert(decimal_to_binary(15) == "db1111db");
    assert(decimal_to_binary(0) == "db0db"); // added test for 0
    assert(decimal_to_binary(1) == "db1db"); // added test for 1
    assert(decimal_to_binary(8) == "db1000db"); // added test for more case
    cout << "All tests passed!" << endl;
    return 0;
}