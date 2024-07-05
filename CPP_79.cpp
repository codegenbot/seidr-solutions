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
    assert(decimal_to_binary(0) == "db0db");
    assert(decimal_to_binary(1) == "db1db");
    assert(decimal_to_binary(2) == "db10db");
    assert(decimal_to_binary(7) == "db111db");
    cout << "All tests passed!" << endl;
    return 0;
}