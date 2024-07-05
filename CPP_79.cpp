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
    // Test case for assertion
    assert(decimal_to_binary(15) == "db1111db");
    
    // Add user input processing
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << decimal_to_binary(num) << endl;
    
    return 0;
}